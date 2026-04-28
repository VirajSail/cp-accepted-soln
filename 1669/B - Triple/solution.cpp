#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; 
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        sort(a, a + n);
        int val = -1, count = 0;
        for(int i = 1; i < n; ++i){
            if(a[i] == a[i - 1]){
                ++count;
                if(count == 2){
                    val = a[i];
                    break;
                }
            }
            else{
                    count = 0;
                }
        }
        cout << val << endl;
    }
}