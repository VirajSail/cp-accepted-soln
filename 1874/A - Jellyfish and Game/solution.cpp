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
 
void swaps(vector<ll> &a, vector<ll> &b){
    auto x = min_element(a.begin(), a.end());
    auto y = max_element(b.begin(), b.end());
    if(*x < *y){
        swap(*x, *y);
    }
}
void solve(){
    ll n, m, k; cin >> n >> m >> k;
    vector<ll> a(n), b(m);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < m; ++i){
        cin >> b[i];
    }
    ll sum = 0;
    swaps(a, b);
    if(k >= 2){
        swaps(b, a);
    }
    if(k > 1 && k % 2 != 0){
        swaps(a, b);
    }
    for(auto x : a) sum += x;
    cout << sum << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
}