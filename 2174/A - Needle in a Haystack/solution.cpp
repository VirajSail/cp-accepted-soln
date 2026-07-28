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
    string s, t;
    cin >> s >> t;
    vector<int> cntS(26), cntT(26);
    for (char c : s) cntS[c - 'a']++;
    for (char c : t) cntT[c - 'a']++;
    for (int i = 0; i < 26; i++){
        if (cntS[i] > cntT[i]){
            cout << "Impossible" << endl; return;
        }
    }
    string rem = t;
    for (char c : s) {
        for (int i = 0; i < rem.size(); i++){
            if (rem[i] == c) {
                rem.erase(rem.begin() + i);
                break;
            }
        }
    }
    sort(rem.begin(), rem.end());
    string ans;
    int i = 0, j = 0;
    while (i < s.size() && j < rem.size()){
        if (rem[j] < s[i]){
            ans += rem[j++];
        } else {
            ans += s[i++];
        }
    }
    while (i < s.size()) ans += s[i++];
    while (j < rem.size()) ans += rem[j++];
    cout << ans << '
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