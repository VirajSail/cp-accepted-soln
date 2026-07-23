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
    ll s, k, m; cin >> s >> k >> m;
    ll tt = m % k;
    if(s <= k){
        if(tt >= s) cout << 0 << endl;
        else cout << s - tt << endl;
    }
    else{
        ll term = (m / k) + 1;
        if(term % 2 == 0){
            ll top = k;
            cout << top - (m % k) << endl;
        }
        else{
            ll top = s;
            cout << top - (m % k) << endl;
        }
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        solve();
    }
}