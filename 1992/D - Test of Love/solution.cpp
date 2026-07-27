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
    int n, m, k; cin >> n >> m >> k;
    string s; cin >> s;
    s = 'L' + s + 'L';
    ll count = 1;
    bool ok = true;
    for(int i = 1; i < n - 1; ++i){
        if(s[i] == 'C' && s[i + 1] == 'C') ++count;
        else count = 1;
        if(count > m){
            ok = false; break;
        }
    }
    if(!ok){
        cout << "NO" << endl; return;
    }
    ll pos = 0, swim = 0;
 
    while(pos != n + 1){
        int nxt = -1;
        for(int i = min((ll)(n + 1), pos + (ll)m); i > pos; i--){
            if(s[i] == 'L'){
                nxt = i; break;
            }
        }
        if(nxt != -1){
            pos = nxt;
        }
        else{
            pos = min((ll)n, pos + (ll)m);
            while(pos <= n && s[pos] == 'W'){
                swim++;
                if(swim > k){
                    cout << "NO" << endl; return;
                }
                pos++;
            }
            if(pos <= n && s[pos] == 'C'){
            cout << "NO" << endl; return;
            }
        }
    }
    cout << "YES" << endl;
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
}