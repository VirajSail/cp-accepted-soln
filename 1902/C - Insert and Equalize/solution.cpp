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
    vector<ll> a(n);
    for(int i = 0 ;i < n; ++i){
        cin >> a[i];
    }
    ll mx = *max_element(a.begin(), a.end());
    ll x = 0, dif = 0;
    for(int i = 0; i < n; ++i){
        x = __gcd(x, mx - a[i]);
        dif += mx - a[i];
    }
    if(n == 1){
        cout << 1 << '
'; return;
    }
    set<ll> k;
    for(auto x : a) k.insert(x);
    ll tt = 1;
    while(k.count(mx - tt * x)){
        tt++;
    }
 
    cout << dif / x + tt << '
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