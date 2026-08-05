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
    vector<ll> p;
    for(int i = 0; i <= 60; i++){
        p.push_back(1LL << i);
    }
    int kk = 0;
    unordered_set<ll> tt;
    for(int kk = 1; kk <= 60; ++kk){
        tt.clear();
        for(int i = 0; i < n; ++i){
            tt.insert(a[i] % p[kk]);
        }
        if(tt.size() == 2){
            cout << p[kk] << '
'; break;
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