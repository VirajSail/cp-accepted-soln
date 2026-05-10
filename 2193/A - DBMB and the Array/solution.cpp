#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, s, x;
        cin >> n >> s >> x;
        int sm = 0, a;
        for(int i = 0; i < n; i++) {
            cin >> a;
            sm += a;
        }
        int d = s - sm;
        if(d >= 0 && d % x == 0)
            cout << "YES
";
        else
            cout << "NO
";
    }
}