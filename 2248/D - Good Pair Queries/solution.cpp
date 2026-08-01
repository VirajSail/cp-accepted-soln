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
    int n, q; cin >> n >> q;
    string s, t; cin >> s >> t;
    vector<int> a(n + 1, 0), b(n + 1, 0), c(n + 1, 0);
    for(int i = 1; i <= n; ++i){
        a[i] = a[i - 1]; b[i] = b[i - 1]; c[i] = c[i - 1];
        if(s[i - 1] == '1') ++a[i];
        if(t[i - 1] == '1') ++b[i];
        if(s[i - 1] == t[i - 1]) ++c[i];
    }
    while(q--){
        int l, r; cin >> l >> r;
        int x = a[r] - a[l - 1];
        int y = b[r] - b[l - 1];
        int z = c[r] - c[l - 1];
        if(z >= abs(x - y)) cout << "YES" << '
';
        else cout << "NO" << '
';
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