#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n; 
        cin >> n;
        int s = 0, a;
        for(int i = 0; i < n; ++i) {
            cin >> a;
            s ^= a;
        }
        if(n % 2 != 0) {
            cout << s << "
";
        } else {
            cout << (s == 0 ? 0 : -1) << "
";
        }
    }
    return 0;
}