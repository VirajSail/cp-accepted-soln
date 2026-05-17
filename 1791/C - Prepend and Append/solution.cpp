#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int k = 0;
        for(int i = 0, j = n - 1; i < n, j >= 0; ++i, --j){
            if(s[i] == s[j]){
                k = j - i + 1;
                break;
            }
        }
        if(n == 1) cout << 1 << endl;
        else{
            cout << k << endl;
        }
    }
}