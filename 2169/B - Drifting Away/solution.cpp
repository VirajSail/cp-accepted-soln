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
    string s; cin >> s;
    bool yes = true;
    for(int i = 0; i < s.size() - 1; ++i){
        if(s[i] != '<' && s[i + 1] != '>'){
            yes = false; break;
        }
    }
    if(yes){
        ll left = 0, right = 0;
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == '<') ++left;
            if(s[i] == '>') ++right;
        }
        cout << s.size() - min(left, right) << endl;
    }
    else cout << -1 << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        solve();
    }
}