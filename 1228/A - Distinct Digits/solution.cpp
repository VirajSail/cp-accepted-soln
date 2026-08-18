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
 
bool check(int i){
    set<int> tt;
    while(i){
        int d = i % 10;
        if(tt.count(d)) return false;
        tt.insert(d);
        i = i / 10;
    }
    return true;
}
 
void solve(){
    int l, r; cin >> l >> r;
    for(int i = l; i <= r; ++i){
        if(check(i)){
            cout << i << '
'; return;
        }
    }
    cout << -1 << '
';
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
        solve();
    }