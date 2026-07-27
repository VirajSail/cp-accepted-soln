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
    int n, m; cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    ll count = 1;
    bool ok = true;
    for(int i = 0; i < n - 1; ++i){
        if(a[i] == a[i + 1]) ++count;
        else count = 1;
        if(count >= m){
            ok = false; break;
        }
    }
    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
}