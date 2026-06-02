#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        ll n, z; cin >> n >> z;
        vector<int> a(n), b(n); bool yes = true;
        int maxx = 0, total = 0;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        for(int i = 0; i < n; ++i){
            cin >> b[i];
        }
        int k = -1;
        for(int i = 0; i < n; ++i){
            if(b[i] != -1){
                k = a[i] + b[i];
                break;
            }
        }
        for(int i = 0; i < n; ++i){
            if(a[i] + b[i] != k && b[i] != -1){
                 yes = false; break;
            }
            if(b[i] == -1){
                int m = k - a[i];
                if(m > z || m < 0){
                    yes = false;
                    break;
                }
            }
        }
        int mn = *min_element(a.begin(), a.end());
        int mx = *max_element(a.begin(), a.end());
        if(k == -1){
            ll mf = mn + z + 1 - mx * 1LL;
            cout << max(0LL , mf) << endl;
        }
        else if(yes) cout << 1 << endl;
        else if(!yes) cout << 0 << endl;
    }
}