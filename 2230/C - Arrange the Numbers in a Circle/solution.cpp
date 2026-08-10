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
    ll one = 0, sum = 0, cap = 0, count = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] == 1) ++one;
        else if(a[i] >= 2){
            ++count; sum += a[i];
        }
    }
    if(count == 0){
        cout << 0 << '
'; return;
    }
    if(count == 1){
        for(int i = 0; i < n; ++i){
            if(a[i] >= 2){
                cap = a[i] / 2; break;
            }
        }
        ll ans = sum + min(one, cap);
        if(ans < 3) cout << 0 << '
';
        else cout << ans << '
';
        return;
    }
    for(int i = 0; i < n; ++i){
        if(a[i] >= 2){
            cap += max(0LL, a[i] / 2 - 1);
        }
    }
    cout << sum + min(one, cap) << '
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