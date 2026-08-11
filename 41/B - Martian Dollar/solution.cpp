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
    ll n, b; cin >> n >> b;
    vector<ll> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    ll mn = a[0], ans = b;
    for (int i = 1; i < n; i++) {
        ll tt = b / mn;
        ll kk = b % mn + tt * a[i];
        ans = max(ans, kk);
        mn = min(mn, a[i]);
    }
    cout << ans << '
';
 
 
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    
    
}