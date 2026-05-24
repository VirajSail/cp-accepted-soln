#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int count = 1, k = 1, m = 0;
        for(int i = 1; i < n; ++i){
            if(s[i] == s[i - 1]){
                ++count;
            }
            else{
                count = 1;
            }
            k = max(count, k);
        }
        cout << k + 1 << endl;
 
    }
}