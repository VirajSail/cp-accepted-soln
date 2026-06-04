#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while (t--){
        int n, m, q; cin >> n >> m >> q;
        vector<int> b(m), a(q);
 
        for(int i = 0; i < m; ++i){
            cin >> b[i];
        }
        for(int i = 0; i < q; ++i){
            cin >> a[i];
        }
 
        sort(b.begin(), b.end());
 
        int k = 1e9, e = 0;
        for(int i = 0; i < m; ++i){
            int mn = abs(a[0] - b[i]);
 
            if(mn < k){
                e = b[i];
                k = mn;
            }
        }
 
        bool yes = false;
        int l = -1, r = -1;
 
        auto it = lower_bound(b.begin(), b.end(), a[0]);
 
        if(it != b.begin() && it != b.end()){
            r = *it;
            l = *(it - 1);
 
            if(l < a[0] && a[0] < r){
                yes = true;
            }
        }
 
        if(a[0] < b[0]){
            cout << b[0] - 1 << endl;
        }
        else if(a[0] > b[m - 1]){
            cout << n - b[m - 1] << endl;
        }
        else if(yes){
            cout << (r - l) / 2 << endl;
        }
        else{
            cout << k << endl;
        }
    }
}