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
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<ll> a(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<ll> pf(n + 1, 0);
        ll sum = 0;
        for(int i = 0; i < n; ++i){
            sum += a[i];
            pf[i + 1] = pf[i] + a[i];
        }
        ll ans = 0;
        for(int i = 0; i <= k; ++i){
            ll removed = pf[2 * i] + (sum - pf[n - (k - i)]);
            ans = max(ans, sum - removed);
 
        }
        cout << ans << endl;
    }
}