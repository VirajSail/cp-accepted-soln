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
    ll n, m, k; cin >> n >> m >> k;
    if(k == 1){
        cout << 1 << '
'; return;
    }
    if(k == 2){
        ll tt = min(m, n - 1) + (m / n);
        cout << tt << '
'; return;
    }
    if(k == 3){
        ll tt = max(0 * 1LL, (m - n + 1) - (m / n));
        cout << tt << '
'; return;
    }
    cout << 0 << '
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