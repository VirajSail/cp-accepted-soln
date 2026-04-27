#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        if( sum % 3 == 0){
            int x = sum/3;
            if( x >= b){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
        
    }
}