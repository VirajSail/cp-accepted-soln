#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll a[n];
        ll k = 0;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        for(int i = 2; i <= 100; ++i){
            for(int j = 0; j < n; ++j){
                 if(gcd(a[j], i) == 1){
                     k = i;
                    break;
                }
            }
            if(k != 0) break;
        }
        cout << k << endl;
    }
}