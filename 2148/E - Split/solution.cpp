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
    vector<int> a(n + 1), f(n + 1, 0), m(n + 1, 0), c(n + 1, 0);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        f[a[i]]++;
    }
    bool ok = true;
    for (int i = 1; i <= n; i++){
        if (f[i] % k){
            ok = false;
            break;
        }
        m[i] = f[i] / k;
    }
    if (!ok){
        cout << 0 << "
";
        return;
    }
    long long ans = 0;
    int l = 1;
    for (int r = 1; r <= n; r++){
        c[a[r]]++;
        while (c[a[r]] > m[a[r]]){
            c[a[l]]--; l++;
        }
        ans += (r - l + 1);
    }
        cout << ans << '
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