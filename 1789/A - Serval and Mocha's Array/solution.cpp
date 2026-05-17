#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        bool yes = false;
        for(int i = 0; i < n; ++i){
            for(int j = i + 1; j < n; ++j){
                if(gcd(a[i], a[j]) <= 2){
                    yes = true;
                    break;
                }
            }
            if(yes){
                break;
            }
        }
        if(yes){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}