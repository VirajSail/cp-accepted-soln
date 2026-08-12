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
    int n; cin >> n;
    vector<ll> a(n);
    set<ll> s;
    for(int i = 0; i < a.size(); ++i){
        cin >> a[i];
        s.insert(a[i]);
    }
    auto it = s.begin();
    for(int i = 1; i <= n + 1; ++i){
        if(it == s.end() || *it != i){
            cout << i << '
'; break;
        }
        ++it;
    }
 
 
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
        solve();
    
    
}