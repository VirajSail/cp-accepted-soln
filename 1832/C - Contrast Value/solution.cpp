#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> a(n), b;
        ll m = 0;
        ll sum = 0; ll k = 0;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        b.push_back(a[0]);
        for(int i = 1; i < n; ++i){
            if(a[i] != a[i - 1]){
                b.push_back(a[i]);
            }
        }
        if(b.size() == 1){
            cout << 1 << endl;
             continue;
         }
        int ans = 2;
        for(int i = 1; i < (int)b.size() - 1; ++i){
            if(b[i - 1] < b[i] && b[i] > b[i + 1] || b[i - 1] > b[i] && b[i + 1] > b[i]) ++ans;
        }
        cout << ans << endl;
    }
}