#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        sort(a, a + n);
        int k = a[n - 1] - a[0];
        cout << (k + 1) / 2 << endl;
    }
}