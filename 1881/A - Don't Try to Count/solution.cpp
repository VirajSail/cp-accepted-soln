#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        string x, s;
        cin >> n >> m;
        cin >> x >> s;
        int ops = 0;
        string cr = x;
        while(cr.size() <= 50){
            if(cr.find(s) != string::npos){
                cout << ops << endl;
                break;
            }
            else{
                cr += cr;
                ++ops;
            }
        }
        if(cr.find(s) == string::npos){
            cout << -1 << endl;
        }
    }
}