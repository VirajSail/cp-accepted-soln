#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const ll MOD = 998244353;
 
ll kk(ll a, ll b){
    ll tt = 1;
    while(b){
        if(b & 1) tt = (tt * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return tt;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        ll n, m, r, c;
        cin >> n >> m >> r >> c;
        ll p = (r - 1) * m + (c - 1) * (n - r + 1);
        cout << kk(2, p) << endl;
    }
}