#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const ll MOD = 676767677;
const ll INF = 1e18;
const int N = 1e6 + 5;
 
ll ans = INF;
set<string> st;
vector<pair<int, int>> bb;
 
void solve(){
    ll n, p, l, t; cin >> n >> p >> l >> t;
    ll pp = (2 * t * 1LL) + l;
    ll kk = (n + 6) / 7;
    
    if(kk % 2 == 0){
        ll ss = (kk / 2) * pp;
        if(p <= ss){
            ll study = (p + pp - 1) / pp;
            cout << n - study << endl;
        }
        else{
            ll total = p - ss;
            ll leftover = (total + l - 1) / l;
            ll study = kk / 2 + leftover;
            cout << n - study << endl;
        }
    }
    else{
        ll ss = ((kk / 2)) * pp + (t + l);
        if(p <= (kk / 2) * pp){
            ll study = (p + pp - 1) / pp;
            cout << n - study << endl;
        }
        else if(p <= ss){
            ll study = (kk / 2) + 1;
            cout << n - study << endl;
        }
        else{
            ll total = p - ss;
            ll leftover = (total + l - 1) / l;
            ll study = (kk / 2) + 1 + leftover;
            cout << n - study << endl; 
        }
    }
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int tt; cin >> tt;
    while(tt--){
        solve();
    }
}