#include <bits/stdc++.h>
using namespace std;
 
int main(){
        int n;
        cin >> n;
        int a[n];
        int min = 0;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            a[i] = abs(a[i]);
        }
        sort (a, a + n);
        min = a[0];
        cout << (min) << endl;
    }