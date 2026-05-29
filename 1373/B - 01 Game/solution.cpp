#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int c0 = 0, c1 = 0;
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == '0') ++c0;
            if(s[i] == '1') ++c1;
        }
        int pairs = min(c0, c1);
        if(pairs % 2 != 0) cout << "DA" << endl;
        else cout << "NET" << endl;
 
    }
}