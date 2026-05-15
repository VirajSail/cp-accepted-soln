#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string x, s = "";
 
        for(int i = 0; i < n; i++) {
            cin >> x;
            if(x + s < s + x)
                s = x + s;
            else
                s = s + x;
        }
 
        cout << s << '
';
    }
}