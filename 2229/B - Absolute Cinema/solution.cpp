#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        for(int i = 0; i < n; ++i){
            cin >> b[i];
        }
        for(int i = 0; i < n; ++i){
            if(a[i] > b[i]){
                swap(a[i], b[i]);
            }
        }
        ll sum = *max_element(a, a + n);
        for(int i = 0; i < n; ++i){
            sum += b[i];
        }
        cout << sum << endl;
    }
}