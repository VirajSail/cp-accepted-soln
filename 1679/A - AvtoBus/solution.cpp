#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll max = 0, min = 0;
        bool yes = true;
        if(n % 2 != 0 || n < 4){
            cout << -1 << endl;
            yes = false;
        }
        else if(n % 4 == 0) max = n / 4;
        else max = (n - 6) / 4 + 1;
        if(n % 6 == 2){
            min = (n - 8) / 6 + 2;
        }
        else if(n % 6 == 4){
            min = (n - 4) / 6 + 1;
        }
        else if(n % 6 == 0) min = n / 6;
        if(yes) cout << min << "  " << max << endl;
    }
}