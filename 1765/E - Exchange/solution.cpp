#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        int n, a, b; cin >> n >> a >> b;
        if(a <= b){
            if(n % a == 0){
                cout << n / a << endl;
            }
            else{
                int k = n / a + 1;
                cout << k << endl;
            }
        }
        else if(b <= a){
            int k = a + abs(a - b); cout << 1 << endl;
        }
    }
}