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
        int count = 0;
        for(int i = 0; i < n; ++i){
            if(a[i] == 2){
                ++count;
            }
        }
        int k = count / 2;
        long long val = 0, m = 0;
        for(int i = 0; i < n; ++i){
            if(a[i] == 2){
                ++val;
                if(val == k){
                    m = i+1;
                    break;
                }
 
            }
            
        }
        if(count % 2 != 0){
            cout << -1 << endl;
        }
        else if(count % 2 == 0 && count > 0){
            cout << m << endl;
        }
        else if(count == 0){
            cout << 1 << endl;
        }
    }
}