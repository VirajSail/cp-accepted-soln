#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long k, x;
        cin >> k >> x;
        for(int i = 1; i < k; ++i){
            x = x * 2;
        }
        if((x - 1) % 3 == 0 && x > 1 && ((x - 1) / 3) % 2 == 1 ){
            cout << (x - 1) / 3 << endl;
        }
        else{
            cout << x * 2 << endl;
            
        }
    }
}