#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
 
        long long count = 0;
        long long base = 1;
        while(base <= n){
            for(int i = 1; i <= 9; ++i){
                if( i * base <= n) count++;
            }
            base *= 10;
        }
        cout << count << endl;
    }
 
}