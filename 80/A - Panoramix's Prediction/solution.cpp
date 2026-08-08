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
    int m, n; cin >> m >> n; 
    vector<int> p;
    for(int i = 2; i <= 100; i++){
        bool ok = true;
    for(int j = 2; j * j <= i; j++){
        if(i % j == 0){
            ok = false; break;
        }
    }
    if(ok) p.push_back(i);
    }
    ll tt = find(p.begin(), p.end(), n) - p.begin();
    if(p[--tt] == m) cout << "YES" << '
';
    else cout << "NO" << '
';
 
 
 
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    
}