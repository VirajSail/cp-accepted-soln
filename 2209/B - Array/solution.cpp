#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        int result[n];
        for(int j = 0; j < n; ++j){
            int big = 0;
            int small = 0;
            for(int i = j + 1 ; i < n; ++i){
                if(a[j] < a[i]){
                    ++big;
                }
                else if(a[j] > a[i]){
                    ++small;
                }
            }
            result[j] = max(big, small);
        }
        for(int i = 0; i < n; ++i){
            cout << result[i] << " ";
        }
    }
}