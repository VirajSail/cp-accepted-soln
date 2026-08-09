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
    vector<ll> a(n), pf(n + 1);
    pf[0] = 0;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i){
        if(i % 2 != 0){
            a[i] = -a[i];
        }
    }
    for(int i = 0; i <= n; ++i){
        pf[i] = pf[i - 1] + a[i - 1];
    }
    set<ll> tt;
    for(int i = 0; i <= n; ++i){
        if(tt.count(pf[i])){
            cout << "YES" << '
'; return;
        }
        tt.insert(pf[i]);
    }
    cout << "NO" << '
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