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
    vector<ll> a(n);
    for(int i = 0 ;i < n; ++i){
        cin >> a[i];
    }
    ll pos = min_element(a.begin(), a.end()) - a.begin();
    for(int i = pos; i < n - 1; ++i){
        if(a[i] > a[i + 1]){
            cout << -1 << '
'; return;
        }
    }
    cout << pos << '
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