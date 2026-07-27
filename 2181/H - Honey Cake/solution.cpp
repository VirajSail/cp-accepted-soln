#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
const ll MOD = 676767677;
const ll INF = 1e18;
const int N = 1e6 + 5;
 
ll ans = INF;
set<string> st;
vector<pair<int, int>> bb;
 
map<int, ll> memo;
 
void solve(){
    ll w, h, d, n; cin >> w >> h >> d >> n;
    ll need = n;
    ll x = gcd(w, need);
    need /= x;
    ll y = gcd(h, need);
    need /= y;
    ll z = gcd(d, need);
    need /= z;
    if(need != 1){
        cout << -1 << endl;
    }
    else cout << x - 1 <<" "<< y - 1 <<" "<<  z - 1 << endl;
 
 
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
}