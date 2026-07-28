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
 
 
void solve() {
    int n; ll x;
    cin >> n >> x;
    vector<pair<double,ll>> jump;
    ll free = 0;
    while(n--){
        ll a,b,c;
        cin >> a >> b >> c;
        free += (b - 1) * a;
        jump.push_back({(double)(a * b - c), a * b - c});
    }
    if(free >= x){
        cout<< 0 << '
'; return;
    }
    sort(jump.rbegin(),jump.rend());
    ll rr = x - free, ans = 0;
    ll gg = jump[0].second;
    if(gg <= 0){
        cout << -1 << '
'; return;
    }
    ans = (rr + gg - 1) / gg; 
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