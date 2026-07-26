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
    vector<int> l(n + 1), r(n + 1), u(n + 1), v(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> l[i] >> r[i] >> u[i] >> v[i];
    }
    for(int i = n; i >= 1; i--){
        int tt = 1;
        bool ok = true;
        for(int j = 1; j <= i; j++){
            int rr = i - j + 1;
            while(tt <= n){
                bool left = (j < l[tt] || j > r[tt]);
                bool right = (rr < u[tt] || rr > v[tt]);
                if(left && right) break;
                tt++;
            }
            if(tt > n){
                ok = false; break;
            }
            tt++;
        }
        if(ok){
            cout << i << endl; return;
        }
    }
    cout << 0 << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
}