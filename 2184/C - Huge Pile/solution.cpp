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
 
ll solve(int n, int k){
    if(n == k) return 0;
    if(n < k) return INF;
    if(memo.count(n)) return memo[n];
 
    return memo[n] = 1 + min(solve(n/2, k), solve((n+1)/2, k));
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        memo.clear();
        ll kk = solve(n, k);
        if(kk >= INF) cout << -1 << endl;
        else cout << kk << endl;
    }
}