#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int c2 = 0, c13 = 0;
        for(int i = 0; i < s.length(); ++i) {
            if(s[i] == '2') {
                ++c2;
            } else if(s[i] == '1' || s[i] == '3') {
                c13 = max(c2 + 1, c13 + 1);
            }
        }
        cout << s.length() - max(c2, c13) << endl;
    }
}