#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while (t--){
        long long n; cin >> n;
        long long maxx = 0, k = 0;
        for(int i = 1; i < 100; ++i){
            if(n % i == 0){
                ++maxx;
                k = max(maxx, k);
            }
            else{
                maxx = 0;
            }
        }
        cout << k << endl;
    }
}