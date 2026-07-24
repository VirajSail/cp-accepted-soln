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
 
ll findd(int b){
    set<int> s;
    for(ll i = 1; i * i <= b; ++i){
        if(b % i == 0){
            ll tt = b / i;
            if(tt % 2 == 0){
                s.insert(tt);
            }
        }
    }
    for (auto it = s.rbegin(); it != s.rend(); ++it) {
        if(*it % 2 == 0){
        return *it; break;
        }
    }
}
 
 
 
 
void solve(){
    ll a, b; cin >> a >> b;
    if(a % 2 == 0 && b % 2 != 0){
        cout << -1 << endl; return;
    }
    else if(a % 2 == 0 && b % 2 == 0){
        ll kk = b / 2;
        cout << (a * kk) + 2 << endl; return;
    }
    else if(a % 2 != 0 && b % 2 != 0){
        cout << (a * b) + 1 << endl; return;
    }
    else { 
        if(b % 4 != 0) {
        cout << -1 << endl;
    }else{
        ll k = b / 2;
        cout << (a * k) + 2 << endl;
    }
}
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        solve();
    }
}