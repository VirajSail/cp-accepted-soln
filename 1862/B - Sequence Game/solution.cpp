#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        int m = n;
        for(int i = 0; i < n - 1; ++i){
            if(a[i] != 1){
                ++m;
            }
        }
        cout << m << endl;
        if(n < 2){
            if (n == 1) cout << a[0] << endl;
        }
        else{
            for(int i = 0; i < n; ++i){
                cout << a[i] << " ";
                if(i != n - 1 && a[i] != 1){
                    cout << 1 << " ";
                }
            }
            cout << endl;
        }
    }
}