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
    int pp = -1;
    for(int i = 1; i < n - 1; i++){
        if(s[i - 1] == s[i + 1] && s[i] != s[i - 1]){
            pp = i; break;
        }
    }
    if(pp == -1){
        for(int i = 1; i < n - 1; i++){
            if(s[i] != s[i - 1] && s[i] != s[i + 1]){
                pp = i; break;
            }
        }
    }
    if(pp == -1) pp = 1;
    s.erase(s.begin() + pp);
    int tt = 0;
    for(int i = 0; i < s.size(); i++){
        if(i == 0 || s[i] != s[i - 1]) tt++;
    }
    cout << tt << '
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