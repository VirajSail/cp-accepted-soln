#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
      int n, sum = 0, sum1 = 0; cin >> n;
      int a[n];
      for(int i = 0; i < n - 1; ++i){
        cin >> a[i];
      }
      for(int i = 0; i < n - 1; ++i){
        if(a[i] < 0){
            sum += abs(a[i]);
        }
        else{
            sum1 += a[i];
        }
      }
      cout << sum - sum1 << endl;
 
    }
}