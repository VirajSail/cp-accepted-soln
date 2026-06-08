#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while (t--) {
        ll x, y; cin >> x >> y;
        ll k = x - 2 * y;
        if (k < 0 || k % 3) {
            cout << "NO
";
            continue;
        }
        k /= 3;
        if (max(0LL, -y) <= k / 2)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}