#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        int n, q; cin >> n >> q;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        for(int i = 0; i < n; ++i){
            cin >> b[i];
        }
        for(int i = 0; i < n; ++i){
            a[i] = max(a[i], b[i]);
        }
        for(int i = n - 2 ; i >= 0; --i){
            a[i] = max(a[i], a[i + 1]);
        }
        vector<ll> p(n + 1);
        for(int i = 0; i < n; ++i){
            p[i + 1] = p[i] + a[i];
        }
        int l, r;
        for(int i = 0; i < q; ++i){
            cin >> l >> r;
            cout << p[r] - p[l - 1] << " ";
        }
        cout << endl;
    }
}