#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long x, y;
        cin >> x >> y;
 
        bool already = false;
        for(long long i = 2 * x; i < y; i += x){
            if(y % i != 0 ){
                already = true;
                break;
            }
        }
        if(already == true){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}