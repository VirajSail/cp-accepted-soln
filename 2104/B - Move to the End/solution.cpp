#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<ll> p(n);
        p[0] = a[0];
        for (int i = 1; i < n; i++) {
            p[i] = max(p[i - 1], a[i]);
        }
        vector<ll> s(n + 1, 0);
        for (int i = n - 1; i >= 0; i--) {
            s[i] = s[i + 1] + a[i];
        }
        for (int k = 1; k <= n; k++) {
            ll ans;
            if (k == 1) {
                ans = p[n - 1];
            } else {
                ans = p[n - k] + s[n - k + 1];
            }
            cout << ans << ' ';
        }
        cout << endl;
    }
}