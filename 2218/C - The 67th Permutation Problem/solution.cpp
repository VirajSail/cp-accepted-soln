#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int l = 1;
        int r = 3 * n;
        for(int i = 0; i < n; i++) {
            cout << l << " ";
            l++;
            cout << r - 1 << " ";
            cout << r << " ";
            r -= 2;
        }
        cout << endl;
    }
}