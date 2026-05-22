#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int count = 0, count1 = 0;
        for(int i = 0; i < n; ++i){
            if(s[i] == '1'){
                ++count;
            }
        }
        bool yes = true;
        for(int i = 0; i < n - 1; ++i){
            if(s[i] == '1' && s[i + 1] == '1'){
                ++count1;
            }
        }
        if(count % 2 != 0) cout << "NO" << endl;
        else if(count1 == 1 && count == 2) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}