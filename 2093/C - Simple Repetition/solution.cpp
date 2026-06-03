#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while (t--) {
        ll n, k, m = 0; cin >> n >> k;
        bool yes = true;
        if(n < 2) yes = false;
        for(int i = 2; i * i <= n; ++i){
            if(n % i == 0){
                yes = false; 
                break;
            }
        }
        if(k == 1 && yes) cout << "YES" << endl;
        else {
            if(n == 1 && k == 2) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}