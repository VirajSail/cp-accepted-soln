#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        vector<string> a(3);
        ll row = 0;
        for(int i = 0; i < 3; ++i){
            cin >> a[i];
            if(a[i].find('?') != string::npos){
                row = i;
            }
        }
        bool aa = false, b = false, c = false;
        for(int i = 0; i < 3; ++i){
            if(a[row][i] == 'A'){
                aa = true; continue;
            }
            if(a[row][i] == 'B'){
                b = true; continue;
            }
            if(a[row][i] == 'C'){
                c = true; continue;
            }
        }
        if(!aa) cout << 'A' << endl;
        else if(!b) cout << 'B' << endl;
        else if(!c) cout << 'C' << endl;
    }
}