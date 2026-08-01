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
    vector<int> a(n), b(m);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < m; ++i){
        cin >> b[i];
    }
    if(n < 2 *  m){
        cout << "NO" << '
'; return;
    }
    sort(a.begin(), a.end()); sort(b.begin(), b.end());
    for(int i = 0; i < m; ++i){
        if(a[i] >= b[i]){
            cout << "NO" << '
'; return;
        }
        if(a[n - m + i] <= b[i]){
            cout << "NO" << '
'; return;
        }
    }
    cout << "YES" << '
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