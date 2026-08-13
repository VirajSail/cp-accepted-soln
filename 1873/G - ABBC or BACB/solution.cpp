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
    bool yes = (s[0] == 'B' || s[s.size() - 1] == 'B');
    for(int i = 0; i < s.size() - 1; ++i){
        if(s[i] == s[i + 1] && s[i] == 'B'){
            yes = true; break;
        }
    }
    vector<int> lens;
    int count = 0;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == 'A') ++count;
        else{
            if(count != 0) lens.push_back(count);
            count = 0;
        }
    }
    if(count != 0) lens.push_back(count);
    int total = 0;
    if(lens.empty()){
        cout << 0 << '
'; return;
    }
    if(yes){
        for(int i = 0; i < lens.size(); ++i){
            total += lens[i];
        }
        cout << total << '
'; return;
    }
    else{
        sort(lens.rbegin(), lens.rend());
        count = 0;
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == 'B') ++count;
        }
        for(int i = 0; i < count; ++i){
            total += lens[i];
        }
        cout << total << '
';
    }
 
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
    
}