#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll closest(ll x, ll n){
    while(x * 3 <= n){
        x *= 3;
    }
    return x;
}
 
ll cnt(ll x, ll n){
    ll count = 0;
    while(x * 3 <= n){
        x *= 3;
        ++count;
    }
    return count;
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll sum = 0, cost = 0; 
        vector<ll> p(40);
        p[0] = 1;
        for(int i = 1; i < 40; ++i){
            p[i] = p[i - 1] * 3;
        }
        while(n > 0){
            ll k = closest(1, n);
            ll count = cnt(1, n);
            if(count == 0) cost = 3;
            else{
                cost = p[count + 1] + 1LL * count * p[count - 1];
            }
            sum += cost;
            n -= k;
        }
        cout << sum << endl;
    }
}