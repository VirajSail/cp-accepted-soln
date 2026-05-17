#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, sum = 0, k = 0, s1 = 0; cin >> n;
        string s; cin >> s;
        for(int i = 0; i < n; ++i){
            if(s[i] ==  '.'){
                ++sum;
                ++s1;
            }
            else{
                k = max(sum, k);
                sum = 0;
            }
        }
        k = max(sum, k);
        if(k >= 3){
            cout << 2 << endl;
        }
        else{
            cout << s1 << endl;
 
        }
    }
}