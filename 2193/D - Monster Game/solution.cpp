#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const ll MOD = 676767677;
const ll INF = 1e18;
const int N = 1e6 + 5;
 
ll ans = INF;
set<string> st;
vector<pair<int, int>> bb;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        for(int i = 0; i < n; ++i){
            cin >> b[i];
        }
        for(int i = 0; i < n; ++i){
 
        }
        sort(a.begin(), a.end());
        vector<ll> pre(n);
        pre[0] = b[0];
        for(int i = 1; i < n; i++){
            pre[i] = pre[i - 1] + b[i];
        }
        ll ans = 0;
        for(int i = 0; i < n; i++){
            ll need = pre[i];
            if(need > n){
                break;
            }
            ll x = a[n - need];
            ans = max(ans, x * (i + 1));
        }
        cout << ans << endl;
    }
}