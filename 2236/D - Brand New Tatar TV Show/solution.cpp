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
    int n, k; cin >> n >> k;
    map<int, int> t;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        t[x]++;
    }
    for(auto it = t.rbegin(); it != t.rend(); ++it){
        int val = it->first;
        int count = it->second;
        if(count % 2 == 0){
            cout << "YES" << '
'; return;
        }
        auto kk = t.lower_bound(val - k);
        if(kk != t.end() && kk->first < val){
            cout << "YES" << '
'; return;
        }
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