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
    vector<string> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    ll ans = 0;
    for(int i = 0; i < n / 2; ++i){
        for(int j = 0; j < n / 2; ++j){
            char c1 = a[i][j];
            char c2 = a[n - 1 - j][i];
            char c3 = a[j][n - 1 - i];
            char c4 = a[n - 1 - i][n - 1 - j];
            char need = max({c1, c2, c3, c4});
            ans += (need - c1) + (need - c2) + (need - c3) + (need - c4);
        }
    }
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