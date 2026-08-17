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
    int n, a, b; cin >> n >> a >> b;
    ll ans = 0;
    for(int i = 1; i < n; i++){
        int x = i; int y = n - i;
        if(x <= a && y <= b){
            ll tt = min(a / x, b / y);
            ans = max(ans, tt);
        }
    }
    cout << ans << '
';
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
        solve();
    }