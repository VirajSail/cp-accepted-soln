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
        int n, c; cin >> n >> c;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        for(int i = 0; i < n; ++i){
            cin >> b[i];
        }
        ll cost = 0;
        bool yes = true;
        for(int i = 0; i < n; ++i){
            if(a[i] < b[i]) yes = false;
            cost += a[i] - b[i];
        }
        ll ans = INF;
        if(yes){
            ans = min(ans, cost);
        }
        vector<int> x = a;
        vector<int> y = b;
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        ll cost2 = c;
        bool ok = true;
        for(int i = 0; i < n; ++i){
            if(x[i] < y[i]) ok = false;
            cost2 += x[i] - y[i];
        }
        if(ok){
            ans = min(ans, cost2);
        }
        if(ans == INF) cout << -1 << endl;
        else cout << ans << endl;
    }
 
}