#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        for (int i = 1; i <= n; i++) {
            cout << i <<"   ";
        }
        for (int i = 1; i <= n; i++) {
            cout << i <<"   ";
        }
        for (int i = 2; i <= n; i++) {
            cout << i <<"   ";
        }
        cout << 1 <<"   ";
        for (int i = 1; i <= n; i++) {
            cout << i <<"   ";
        }
        cout << endl;
    }
}