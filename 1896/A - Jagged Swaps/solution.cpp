#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
      int n; cin >> n;
      int a[n];
      for(int i = 0; i < n; ++i){
        cin >> a[i];
      }
      int k = *min_element(a, a + n);
      if(k != a[0]){
        cout << "NO" << endl;
      }
      else{
        cout << "YES" << endl;
      }
 
    }
}