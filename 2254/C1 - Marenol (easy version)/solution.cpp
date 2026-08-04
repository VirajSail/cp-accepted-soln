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
    string a, b; cin >> a >> b;
    int tt = 0, kk = 0, cc = 0, jj = 0;
    for(int i = 0; i < n; ++i){
        if(i % 2 == 0){
            if(a[i] == '1') tt++;
            if(b[i] == '1') cc++;
        }
        else{
            if(a[i] == '1') kk++;
            if(b[i] == '1') jj++;
        }
    }
    if(tt == cc && kk == jj) cout << "YES" << '
';
    else cout << "NO" << '
';
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
}