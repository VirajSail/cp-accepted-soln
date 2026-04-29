#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b, c;
        cin >> a >> b >> c;
        if((a >= b && c % 2 != 0) || (c % 2 == 0 && b < a)){
            cout << "First" << endl;
        }
        else if((b >= a && c % 2 == 0) || (c % 2 != 0 && a < b)){
            cout << "Second" << endl;
        }
    }
}