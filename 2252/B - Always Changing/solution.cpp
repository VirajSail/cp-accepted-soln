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
    string s; cin >> s;
    int z = 0, o = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0') z++;
        else o++;
    }
    if(abs(z - o) > 2){
        cout << -1 << '
'; return;
    }
    string r; r += s[0];
    for(int i = 1; i < n; i++){
        if(s[i] != s[i-1]) r += s[i];
    }
    int k = r.size(), mx = 0;
    for(int d = -1; d <= 1; d++){
        if(abs((z - o) - d) > 1) continue;
        int cc = 0;
        if(d == 0){
            if(k % 2 == 0) cc = k;
            else cc = k - 1;
        }
        else if(d == 1){
            if(r[0] == '0' && r[k - 1] == '0') cc = k;
            else if(r[0] == '0' || r[k - 1] == '0') cc = k - 1;
            else cc = max(0, k - 2);
        }
        else{
            if(r[0] == '1' && r[k - 1] == '1') cc = k;
            else if(r[0] == '1' || r[k - 1] == '1') cc = k - 1;
            else cc = max(0, k - 2);
        }
        mx = max(mx, cc);
    }
    cout << n - mx << '
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