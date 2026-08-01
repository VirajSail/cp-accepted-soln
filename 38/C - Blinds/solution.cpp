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
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    ll tt = *max_element(a.begin(), a.end());
    ll mx = 0;
    for(int i = k; i <= tt; ++i){
        ll pieces = 0;
        for(int j = 0; j < n; ++j){
            pieces += a[j] / i;
        }
        pieces *= i;
        mx = max(mx, pieces);
    }
    cout << mx << '
';
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
}