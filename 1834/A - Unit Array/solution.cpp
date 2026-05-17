#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, sum = 0, c2 = 0, c1 = 0; cin >> n;
        int a[n];
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            sum += a[i];
            if(a[i] == -1){
                ++c2;
            }
            else{
                ++c1;
            }
        }
        int ops = 0;
        if(c2 > c1){
        ops = (c2 - c1 + 1) / 2;
        }
        int leftc2 =  c2 - ops;
        if(leftc2 % 2 == 0){
            cout << ops << endl;
        }
        else{
            cout << ++ops << endl;
        }
    }
}