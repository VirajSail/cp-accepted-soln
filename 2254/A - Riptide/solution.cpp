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
    int a, b, c; cin >> a >> b >> c;
    vector<int> v = {a, b, c};
    ll rounds = 0;
    while(true){
        if (v[0] == v[1] || v[1] == v[2] || v[0] == v[2]) break;
        int mn = min_element(v.begin(), v.end()) - v.begin();
        int mx = max_element(v.begin(), v.end()) - v.begin();
        v[mx]--; v[mn]++;
        rounds++;
    }
    cout << rounds << '
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