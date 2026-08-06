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
    map<int,int> tt;
    ll ans = 0, s = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x; s += x;
        tt[x]++;
    }
    ll f = 0, v = 0;
    for(auto x : tt){
        if(x.second > f){
            f = x.second; v = x.first;
        }
    }
    ll o = n - f;
    ll e = max(0LL , f - o - 2);
    cout << s - e * v << '
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