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
    multiset<ll> b;
    for(int i = 0; i < n; ++i){
        ll x; cin >> x;
        b.insert(x);
    }
    vector<ll> a;
    ll sum = 0;
    for(int i = 0; i < n; i++){
        auto tt = b.lower_bound(1 - sum);
        if(tt == b.end()){
            cout << -1 << '
'; return;
        }
        sum += *tt;
        a.push_back(sum); b.erase(tt);
    }
    for(auto x : a) cout << x << " ";
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