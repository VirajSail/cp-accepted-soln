#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int l, r; cin >> l >> r;
        int L, R; cin >> L >> R;
        int k = 0, f = 0;
        if(L > r && R > l ||  l > R && r > L) cout << 1 << endl;
        else if(L < l && R > r || l > L && R < r){
            k = max(L, l); f = min(R, r);
            int m = f - k;
            cout << m + 2 << endl;
        }
        else if(l == L && R == r){
            int m = r - l;
            cout << m << endl;
        }
        else if((l < L  || L <  l) && r == R ){
            int m = max(l, L);
            int k = abs(m - R);
            cout <<  k + 1 << endl;
        }
        else if((r < R || R < r) && l == L){
               int m = min(r, R);
               int k = abs(l - m);
 
               cout << k + 1<< endl;
        }
        else if(max(l, L) <= min(r, R)){
 
            int k = max(l, L);
            int f = min(r, R);
 
            int ans = f - k + 2;
 
            cout << ans << endl;
        }
    }
}