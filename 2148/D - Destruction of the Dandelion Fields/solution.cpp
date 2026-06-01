#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> a(n);
        vector<ll> odd;
        ll sum = 0, count = 0, even = 0;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        for(int i = 0; i < n; ++i){
            if(a[i] % 2 != 0){
                ++count;
                odd.push_back(a[i]);
            }
            if(a[i] % 2 == 0){
                sum += a[i];
            }
        }
        int k = (count + 1) / 2;
        for(int i = 0; i < k; ++i){
            sum += odd[i];
        }
        if(count == 0) cout << 0 << endl;
        else cout << sum << endl;
    }
}