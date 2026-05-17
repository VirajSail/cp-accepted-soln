#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        if(a[0] == a[n-1]) {
            cout << -1 << endl;
            continue;
        }        
        int k = 0;
        while(a[k] == a[0]) k++;
        cout << k << " " << n - k << endl;
        for(int i = 0; i < k; i++) cout << a[i] << " ";
        cout << endl;
        for(int i = k; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
}