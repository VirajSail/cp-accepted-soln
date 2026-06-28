#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll ans = 0;
        for(int b = 1; b <= n; ++b){
            ll k = n / b;
            ans += k * k;
        }
        cout << ans << endl;
    }
 
}