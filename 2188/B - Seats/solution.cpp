#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        int n, c1 = 0, c0 = 0; cin >> n;
        string s; cin >> s;
        string tt = s;
        for(int i = 0; i < n; ++i){
            if(s[i] == '1'){
                ++c1;
                tt[i] = 'X';
                if(i > 0){
                    tt[i - 1] = 'X'; 
                }
                if(i < n - 1){
                    tt[i + 1] = 'X';
                }
            }
        }
        for(int i = 0; i < tt.size(); ++i){
            if(tt[i] == '0'){
                ++c0;
            }
            else{
                if(c0 > 0){
                    c1 += (c0 + 2)/ 3;
                    c0 = 0;
                }
            }
 
        }
        if(c0 > 0){
            c1 += (c0 + 2) / 3;
        }
        cout << c1 << endl;
 
    }
}