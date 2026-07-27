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
    set<int> s;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        s.insert(x);
    }
    vector<int> v(s.begin(), s.end());
    if(v.size() < 2) cout << "NO" << endl;
    else cout << v[1] << endl;
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    
}