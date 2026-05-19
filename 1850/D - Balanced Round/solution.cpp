#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t; cin >> t;
    while (t--){
        ll n, k, count = 1, m = 1; cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        sort(a, a + n);
        for(int i = 1; i < n; ++i){
            if(abs(a[i] - a[i - 1]) <= k){
                ++count;
                m = max(count, m);
            }
            else{
                count = 1;
            }
        }
        if(n < 2) cout << 0 << endl;
        else cout << n - m << endl;
    }
}