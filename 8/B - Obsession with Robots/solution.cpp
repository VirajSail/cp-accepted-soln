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
    string s; cin >> s;
    pair<int, int> p = {0, 0};
    set<pair<int, int>> vis = {p};
    vector<pair<int, int>> dirs = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
 
    for (char c : s) {
        if (c == 'R') p.first++;
        if (c == 'L') p.first--;
        if (c == 'U') p.second++;
        if (c == 'D') p.second--;
 
        int count = 0;
        for (auto [dx, dy] : dirs) {
            if (vis.count({p.first + dx, p.second + dy})) {
                count++;
            }
        }
        if (vis.count(p) || count > 1) {
            cout << "BUG" << '
'; return;
        }
 
        vis.insert(p);
    }
 
    cout << "OK" << '
';
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
}