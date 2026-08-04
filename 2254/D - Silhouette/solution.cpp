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
    vector<ll> b(n);
    map<ll, vector<int>> jj;
    for(int i = 0; i < n; i++){
        cin >> b[i]; jj[b[i]].push_back(i);
    }
    if(jj.begin()->first != 0){
        cout << -1 << '
'; return;
    }
    vector<pair<ll,int>> g;
    for (auto &x : jj) g.push_back({x.first, (int)x.second.size()});
    int m = g.size();
    vector<ll> vv(m);
    if(m == 1){
        for(int c : jj[0]) b[c] = 1;
        for(int i = 0; i < n; i++) cout << b[i] << " ";
        cout << '
'; return;
    }
    for(int i = 0; i < m - 1; i++){
        ll diff = g[i + 1].first - g[i].first;
        if(diff % g[i].second != 0){
            cout << -1 << '
'; return;
        }
        vv[i] = diff / g[i].second;
        if(vv[i] <= 0){
            cout << -1 << '
'; return;
        }
        if(i && vv[i] <= vv[i - 1]){
            cout << -1 << '
'; return;
        }
    }
    vv[m - 1] = vv[m - 2] + 1;
    int tt = 0;
    for(auto &x : jj){
        for(int kk : x.second) b[kk] = vv[tt]; tt++;
    }
    for(int i = 0; i < n; i++) cout << b[i] << " ";
    cout << '
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