#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t; cin >> t;
    while(t--){
        ll a, b, c, d; cin >> a >> b >> c >> d;
        ll y = a * d;
        ll x = b * c;
         if(y == x) cout << 0 << endl;
        else if(x == 0 || y == 0) cout << 1 << endl;
 
        else if(y % x == 0 || x % y == 0) cout << 1 << endl;
 
        else cout << 2 << endl;
    }
}