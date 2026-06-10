#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n), mx(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        mx[n - 1] = a[n - 1];
        int ans = (mx[n - 1] > 0);
        for (int i = n - 2; i >= 0; i--) {
            mx[i] = max(a[i], a[i] + mx[i + 1]);
            if (mx[i] > 0)
                ans++;
        }
        cout << ans << endl;
    }
}