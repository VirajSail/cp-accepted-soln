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
    int n = s.size();
    string ans = "";
    for (int i = 0; i < n; i++){
        if(s[i] == '0'){
            string t = s;
            t.erase(t.begin() + i);
            int pos = -1;
            for (int j = 0; j < (int)t.size(); j++){
                if (t[j] == '1'){
                    pos = j;
                    break;
                }
            }
            if(pos != -1) t.erase(t.begin() + pos);
            if(t > ans) ans = t;
        }
    }
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