#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        if (n == 10) {
            cout << -1 << '
';
        }
        else if (n % 12 != 10) {
            ll a = n % 12;
            cout << a << " " << n - a << '
';
        }
        else {
            cout << 22 << " " << n - 22 << '
';
        }
    }
}