#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int mx = 0, mn = 7;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mx = max(mx, x);
            mn = min(mn, x);
        }
        cout << mx + 1 - mn << endl;
    }
}