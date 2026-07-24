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
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int i = 0, j = 0;
        bool ok = false;
        while(j < n){
            if(i == j){
                ++j; continue;
            }
            ll diff = 1LL * a[j] - a[i];
            if(diff == k){
                ok = true; break;
            } 
            else if(diff < k){
                ++j;
            }
            else if(diff > k){
                ++i;
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}