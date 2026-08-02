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
    int n, t; cin >> n >> t;
    vector<ll> a(n), pf(n + 1, 0);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        pf[i + 1] = pf[i] + a[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ll target = pf[i] + t;
        int pos = upper_bound(pf.begin(), pf.end(), target) - pf.begin();
        ans = max(ans, pos - i - 1);
    }
 
    cout << ans << '
';
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
}