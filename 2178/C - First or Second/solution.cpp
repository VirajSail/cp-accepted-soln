#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        ll mx = LLONG_MIN;
        vector<ll> pref(n, 0);
        for(int i = 1; i < n; ++i){
            pref[i] = pref[i - 1] + abs(a[i]);
        }
        vector<ll> suff(n + 1, 0);
        for(int i = n - 1; i >= 0; --i){
            suff[i] = suff[i + 1] - a[i];
        }
        for(int i = 0; i < n; ++i){
            ll tt = 0;
            if(i != 0) tt += a[0];
            if(i > 1) tt += pref[i - 1] - pref[0];
            tt += suff[i + 1];
            mx = max(mx, tt);
        }
        cout << mx << endl;
    }
}