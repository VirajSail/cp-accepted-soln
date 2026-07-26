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
    vector<ll> a(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    if(n % 2 != 0){
        cout << "NO" << endl;
        return;
    }
    ll mx = 0;
    ll mn = INF;
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            mn = min(mn, a[i]);
        }
        else{
            mx = max(mx, a[i]);
        }
    }
    if(mx + 1 < mn){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
}