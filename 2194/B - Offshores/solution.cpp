#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        ll n, x, y; cin >> n >> x >> y;
        ll a[n];
        ll total = 0;
        ll ans = 0, k = 0;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        for(int i = 0; i < n; ++i){
            total += (a[i]/ x) * y;
        }
        for(int i = 0; i < n; ++i){
            k = total - (a[i] / x) * y + a[i];
            ans = max(ans, k);
        }
        cout << ans << endl;
    }
}