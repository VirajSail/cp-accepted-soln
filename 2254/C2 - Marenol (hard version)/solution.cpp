#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
const ll MOD = 676767677;
const ll INF = 1e18;
const int N = 1e6 + 5;
 
ll ans = INF;
set<string> st;
vector<pair<int, int>> bb;
 
map<int, ll> memo;
 
void solve(){
    int n; cin >> n;
    string a, b; cin >> a >> b;
    vector<int> ae, ao, be, bo;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            if(a[i] == '1') ae.push_back(i / 2);
            if(b[i] == '1') be.push_back(i / 2);
        }
        else{
            if(a[i] == '1') ao.push_back(i / 2);
            if(b[i] == '1') bo.push_back(i / 2);
        }
    }
    if(ae.size() != be.size() || ao.size() != bo.size()){
        cout << -1 << '
'; return;
    }
    ll ans = 0;
    for(int i = 0; i < ae.size(); i++) ans += abs(ae[i] - be[i]);
    for(int i = 0; i < ao.size(); i++) ans += abs(ao[i] - bo[i]);
    cout << ans << '
';
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
}