#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
const ll MOD = 1000000007;
const ll INF = 1e18;
const int N = 1e6 + 5;
 
ll ans = INF;
set<string> st;
vector<pair<int, int>> bb;
 
map<int, ll> memo;
ll fact[N];
void precompute(){
    fact[0] = 1;
 
    for(int i = 1; i < N; i++){
        fact[i] = fact[i - 1] * i % MOD;
    }
}
 
void solve(){
    int n; cin >> n;
    cout << fact[2 * n] * 500000004 % MOD << '
';
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    precompute();
    while(t--){
        solve();
    }
}