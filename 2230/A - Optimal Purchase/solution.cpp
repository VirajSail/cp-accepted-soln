#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin >> t;
    while(t--){
        long long a, b, c; cin >> a >> b >> c;
        if(3 * b < c){
            cout << b * a << endl;
        }
        else{
            if(a % 3 == 1){
                long long k = a / 3;
                cout << k * c + min(b, c) << endl;
            }
            else if(a % 3 == 2){
                long long k = a / 3;
                cout << k * c + min(2 * b, c) << endl;
            }
            else{
                cout << (a / 3) * c << endl;
            }
        }
    }
 
}