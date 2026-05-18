#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while (t--){
        long long n, k, x; cin >> n >> k >> x;
        long long max = 0, count = 0, count1 = 0, min = 0;
        min = k * (k + 1) / 2;
        max = k * (2 * n - k + 1) / 2;
        if(x >= min && x <= max){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" <<endl;
        }
    }
}
 