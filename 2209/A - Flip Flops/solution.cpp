#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        ll c, k;
        cin >> n >> c >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        sort(a.begin(), a.end());
        ll cur = c, rem = k;
        for (int i = 0; i < n; ++i) {
            if (a[i] > cur) break;          // cannot kill this monster
            ll new_val = min(cur, a[i] + rem);
            ll used = new_val - a[i];
            cur += new_val;
            rem -= used;
        }
        cout << cur << endl;
    }
    return 0;
}