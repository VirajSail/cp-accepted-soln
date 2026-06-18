#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        vector<ll> tt;
        for(int i = 0; i < n; ++i){
            ll kk = a[i];
            while(!tt.empty() && tt.back() > kk){
                kk += tt.back();
                tt.pop_back();
            }
            tt.push_back(kk);
        }
        ll ans = 0;
        for(auto x : tt){
            ans = max(ans, x);
        }
        cout << ans << endl;
    }
}