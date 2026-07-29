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
 
void rec(string &s, int l, int r, vector<string> &a){
    if(l == r){
        a.push_back(s); return;
    }
    for(int i = l; i <= r; ++i){
        swap(s[l], s[i]);
        rec(s, l + 1, r, a);
        swap(s[l], s[i]);
    }
}
 
void solve(){
    string s; cin >> s;
    int l, k; cin >> l >> k;
    vector<string> result; 
    rec(s, 0, s.size() - 1, result);
    sort(result.begin(), result.end());
    string tt = result[l - 1];
    string kk = result[k - 1];
    int a = 0, b = 0;
    for(int i = 0, j = 0; i < s.size() && j < s.size(); ++i, ++j){
        if(tt[i] == kk[j]) ++a;
    }
    cout << a << 'A' << s.size() - a << 'B' << '
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