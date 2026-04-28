#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; 
    cin >> t;
    while (t--){
        int n; 
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
 
        long long sum = 0;
        int l = -1;
        for (int i = 0; i < n; ++i){
            if (a[i] >= 2){
                sum += a[i];
                l = i;
            }
        }
 
        bool trail = false;
        for (int i = l + 1; i < n; ++i){
            if (a[i] == 1){
                trail = true;
                break;
            }
        }
        long long ans = (l == -1) ? 1 : sum + trail;
        cout << ans % 676767677 << endl;
    }
}