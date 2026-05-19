#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        for(int i = 0; i < n - 1; ++i){
            if(a[i] == 1){
                a[i] += 1;
            }
        }
        for(int i = 1; i < n; ++i){
            if(a[i] % a[i - 1] == 0){
                ++a[i];
            }
            else{
                continue;
            }
        }
        for(int i = 0; i < n; ++i){
            cout << a[i] << " ";
        }
        cout << endl;
 
    }
}