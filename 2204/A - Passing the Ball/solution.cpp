#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool v[55] = {0};
        int c = 0;
        v[c] = 1;
        for (int i = 0; i < n; i++) {
            if (s[c] == 'L') c--;
            else c++;
            v[c] = 1;
        }
        int a = 0;
        for (int i = 0; i < n; i++) {
            if (v[i]) a++;
        }
        cout << a << endl;
    }
    return 0;
}