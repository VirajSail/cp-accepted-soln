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
    vector<int> a(n), b(n), c(n), taken;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }
    for(int i = 0; i < n; ++i){
        cin >> c[i];
    }
    vector<pair<int, int>> aa, bb, cc;
    for(int i = 0; i < n; ++i){
        aa.push_back({a[i], i});
    }
    for(int i = 0; i < n; ++i){
        bb.push_back({b[i], i});
    }
    for(int i = 0; i < n; ++i){
        cc.push_back({c[i], i});
    }
    sort(aa.rbegin(), aa.rend()); sort(bb.rbegin(), bb.rend()); sort(cc.rbegin(), cc.rend());
    int ans = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                if(aa[i].second != bb[j].second && bb[j].second != cc[k].second && aa[i].second != cc[k].second){
                    ans = max(ans, aa[i].first + bb[j].first + cc[k].first);
                }
            }
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