#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t; cin >> t;
    while (t--){
        vector<ll> v;
        int n; cin >> n;
        ll sum = 0, count = 0, k = 0;
        for(int i = 0; i < n; ++i){
            ll x; cin >> x;
            v.push_back(x);
        }
        for(int i = 0; i < n; ++i){
            if(v[i] != 1){
                sum += v[i];
                ++count;
            }
        }
        if(sum >= n && n != 1){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
 
    }
}