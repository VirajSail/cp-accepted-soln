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
 
 
int mexx(string s, int l, int r){
    bool zero = false, one = false;
    for(int i = l; i < r; i++){
        if(s[i] == '0') zero = true;
        else one = true;
    }
    if(!zero) return 0;
    if(!one) return 1;
    return 2;
}
 
void solve(){
    string s; cin >> s;
    ll front = -1, back = -1;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == '0'){
            front = i; break;
        }
    }
    for(int i = s.size() - 1; i >= 0; --i){
        if(s[i] == '0'){
            back = i; break;
        }
    }
    if(front == -1){
        cout << 0 << '
'; return;
    }
    cout << mexx(s, front, back + 1) << '
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