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
    string s, t; cin >> s >> t;
    string tt;
    for(int i = s.size() - 1; i >= 0; --i){
        tt.push_back(s[i]);
    }
    if(tt != t) cout << "NO" << '
';
    else cout << "YES" << '
';
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
}