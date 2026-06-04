#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while (t--){
        int n; cin >> n; bool yes = true, one = true;
        string a, b; cin >> a; cin >> b;
        int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                if(a[i] == '1') c1++;
                if(b[i] == '1') c3++;
            }
            else{
                if(b[i] == '1') c4++;
                if(a[i] == '1') c2++;
                }
            }
        int k = (n + 1)/ 2, m = n / 2; 
        if(c1 + c4 > m || c2 + c3 > k) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}