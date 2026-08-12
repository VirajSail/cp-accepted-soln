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
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    ll left  = 0, right = 1e9;
    for(int i = 0; i < n - 1; ++i){
        if(a[i] > a[i + 1]){
            left = max(left, (a[i] + a[i + 1] + 1) / 2);
        }
        else if(a[i] < a[i + 1]){
            right = min(right, (a[i] + a[i + 1]) / 2);
        }
    }
    if(left <= right){
        cout << left << '
';
    }
    else cout << -1 << '
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