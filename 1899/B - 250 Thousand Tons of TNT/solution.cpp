#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const ll MOD = 676767677;
const ll INF = 1e18;
const int N = 1e6 + 5;
 
ll ans = INF;
set<string> st;
vector<pair<int, int>> bb;
 
void solve(vector<int> &a, int n){
    vector<int> div;
    for(int i = 1; i <= n; ++i){
        if(n % i == 0) div.push_back(i);
    }
    ll mx = 0;
    for(int m = 0; m < div.size(); ++m){
        vector<ll> ss;
        ll count = 0, sum = 0;
        for(int i = 0; i < n; ++i){
            sum += a[i]; ++count;
            if(count == div[m]){
                ss.push_back(sum); sum = 0; count = 0;
            }
        }
        ll tt = *max_element(ss.begin(), ss.end());
        ll kk = *min_element(ss.begin(), ss.end());
        mx = max(mx, tt - kk);
    }
    cout << mx << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        solve(a, n);
 
    }
}