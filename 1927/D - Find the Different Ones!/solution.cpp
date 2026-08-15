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
    vector<int> a(n), p(n, -1);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
 
    }
    for(int i = 1; i < n; ++i){
        if(a[i] != a[i - 1]){
            p[i] = i - 1;
        }
        else p[i] = p[i - 1];
 
    }
 
    int q; cin >> q;
    while(q--){
        int l, r; cin >> l >> r;
        --l; --r;
        if(p[r] >= l){
            cout << p[r] + 1 <<" "<< r + 1 << '
';
        }
        else{
            cout << -1 <<" "<< -1 << '
';
        }
 
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