#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        if(n % 2 != 0 && n != 1){
            cout << -1 << endl;
        }
        else if(n == 1) cout << 1 << endl;
        else{
            for(int i = 1; i <= n; ++i){
                if(i % 2 == 0) cout << i - 1 << " ";
                else cout << i + 1 << " ";
            }
            cout << endl;
        }
    }
}