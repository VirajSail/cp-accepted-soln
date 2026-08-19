#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
const ll MOD = 1000000007;
const ll INF = 1e18;
const int N = 1e6 + 5;
 
ll ans = INF;
set<string> st;
vector<pair<int, int>> bb;
 
map<int, ll> memo;
 
void solve(){
    int n, x, y; cin >> n >> x >> y;
    map<pair<int,int>, ll> mp;
    ll ans = 0;
    for(int i = 0; i < n; ++i){
        ll a; cin >> a;
        int rx = a % x, ry = a % y;
        int needX = (x - rx) % x;
        ans += mp[{needX, ry}];
        mp[{rx, ry}]++;
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