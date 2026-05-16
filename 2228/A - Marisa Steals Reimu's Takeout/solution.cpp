#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, sum = 0, count = 0, count1 = 0; cin >> n;
        int a[n];
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        int z = 0, t = 0, o = 0;
        for(int i = 0; i < n; ++i){
            if(a[i] == 2){
                ++t;
            }
            else if(a[i] == 1){
                ++o;
            }
            else{
                ++z;
            }
 
        }
        int ans = z;
        int k = min(o, t);
        ans += k;
        o -= k;
        t -= k;
        ans += o/3;
        ans += t/3;
 
        cout << ans << endl;
    }
}