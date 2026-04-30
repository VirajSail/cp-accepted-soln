#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(d < b || (b == d && a < c)){
            cout << -1 << endl;
            continue;
        }
        int x = d - b;
        int y = x + a;
        if(y < c){
            cout << -1 << endl;
        }
        else{
            cout << abs(x) + abs(y - c) << endl;
        }
    }
}
 