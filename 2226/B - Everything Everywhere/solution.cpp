#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; 
    cin >> t;
    while (t--){
        int n; 
        cin >> n;
        int p[n];
        for (int i = 0; i < n; ++i){
            cin >> p[i];
        }
 
        int ans = 0;
        for (int i = 0; i + 1 < n; ++i){
            int a = p[i], b = p[i + 1];
            int diff = abs(a - b);
            int mx = max(a, b);
            if (mx % diff == 0){
                ++ans;
            }
        }
        cout << ans << '
';
    }
}