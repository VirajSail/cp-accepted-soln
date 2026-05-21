#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t; cin >> t;
    while (t--){
        ll n; cin >> n;
        ll a[n];
        ll minn = 0, k = 0;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        for(int i = 0; i < n - 1; ++i){
            if(a[i] > a[i + 1]){
                minn = a[i] - a[i + 1];
                k = max(minn, k);
            }
        }
        bool yes = true;
        for(int i = 0; i < n - 1; ++i){
            if(a[i + 1] < a[i]){
                a[i + 1] += k;         
                if(a[i + 1] < a[i]){ 
                    yes = false;
                }
            }
        }
        if(yes) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}