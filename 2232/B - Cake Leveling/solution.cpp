#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        ll sum = 0;
        ll mn = 1e18;
        for(int i = 0; i < n; ++i){
            sum += a[i];
            mn = min(mn, sum / (i + 1));
            cout << mn << " ";
        }
        cout << endl;
    }
}