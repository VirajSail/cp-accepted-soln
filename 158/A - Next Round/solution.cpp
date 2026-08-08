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
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    ll count = 0, mn = a[k - 1]; 
    for(auto x : a){
        if(x >= mn && x > 0) ++count;
    }
    cout << count << '
';
 
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
        solve();
    
}