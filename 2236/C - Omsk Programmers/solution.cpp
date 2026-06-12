#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while (t--) {
        ll a, b, x; cin >> a >> b >> x;
        ll ans = abs(a - b); ll op = 0;
        while (a > 0 || b > 0) {
            if (a < b) swap(a, b);
            ans = min(ans, op + (a - b));
            a /= x; op++;
            ans = min(ans, op + abs(a - b));
            if (a == 0 && b == 0) break;
        }
        cout << ans << endl;
    }
 
}