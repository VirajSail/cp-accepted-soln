#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int s = 0;
        for(int i = 0; i < 10; i++) {
            string a;
            cin >> a;
            for(int j = 0; j < 10; j++) {
                if(a[j] == 'X') {
                    int x = min(min(i, 9 - i), min(j, 9 - j));
                    s += x + 1;
                }
            }
        }
        cout << s << endl;
    }
}