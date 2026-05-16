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
        if(is_sorted(a, a + n)){
            int b = 1, k, mini = 1e9;
            for(int i = 1; i < n; ++i){
                k = a[i] - a[i - 1];
                mini = min(mini, k);
            }
            cout << (mini / 2) + 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
}