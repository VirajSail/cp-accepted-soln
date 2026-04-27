#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int opt = 0;
        int out = 0;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            if(a[i] == -1){
                ++opt;
            }
            else if(a[i] == 0){
                ++out;
            }
        
        }
        if(opt % 2 != 0){
            cout << out + 2 << endl;
        }
        else if(opt % 2 ==0){
            cout << out << endl;
        }
    }
}    