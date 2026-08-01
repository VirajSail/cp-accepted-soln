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
    vector<int> a(2 * n + 1), l(n + 1, 0), r(n + 1, 0);
    for(int i = 1; i <= 2 * n; ++i){
        cin >> a[i];
        if(l[a[i]] == 0) l[a[i]] = i;
        else r[a[i]] = i;
    }
    vector<ll> dp(2 * n + 1, 0);
    for(int i = 1; i <= 2 * n; ++i){
        dp[i] = dp[i - 1] + 1;
        int tt = a[i];
        if(r[tt] == i){
            ll mx = i - l[tt] + 1;
            dp[i] = max(dp[i], dp[l[tt] - 1] + mx * mx);
        }
    }
    cout << dp[2 * n] << '
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