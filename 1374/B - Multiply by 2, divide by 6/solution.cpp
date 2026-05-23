#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        bool yes = true;
        int c = 0, count = 0;
        while(n != 1){
            ++c;
            if(n % 6 ==  0){
                n = n / 6;
                ++count;
            }
            else if(n % 6 != 0 && n % 3 == 0){
                n = n * 2;
                ++count;
            }
            else {
                cout << -1 << endl;
                yes = false;
                break;
        }
    }
    if(yes) cout << count << endl;
}
}