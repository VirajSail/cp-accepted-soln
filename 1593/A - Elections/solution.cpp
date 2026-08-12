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
    int n; n = 3;
    vector<ll> a(n);
    for(int i = 0; i < a.size(); ++i){
        cin >> a[i];
    }
    int mx = *max_element(a.begin(), a.end());
    for(int i = 0; i < n; ++i){
        if(a[i] == mx){
            int count = 0;
            for(int j = 0; j < n; ++j){
                if(a[j] == mx) ++count;
            }
            if(count == 1) cout << 0 <<" ";
            else cout << 1 <<" ";
        }
        else cout << 1 + (mx - a[i]) <<" ";
    }
    cout << '
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