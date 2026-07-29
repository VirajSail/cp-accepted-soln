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
    vector<ll> b(n);
    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }
    ll sum = 0, c1 = 0;
    for (int i = 0; i < n; i++){
        if (b[i] > 0){
            c1++;
        }
        sum += b[i];
    }
 
    ll s2 = sum - c1;
    ll sub = n - 1 - s2;
 
    cout << c1 - max(0ll , sub) << '
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