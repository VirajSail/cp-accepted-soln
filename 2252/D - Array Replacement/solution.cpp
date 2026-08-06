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
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<ll> tt;
    for(int i = 0; i < n - 1; i++){
        tt.push_back(a[i + 1] - a[i]);
    }
    int i = 0;
    while(i < n - 1){
        int j = i;
        while(j + 1 < n - 1 && ((abs(tt[j]) % 2) == (abs(tt[j + 1]) % 2))) j++;
        sort(tt.begin() + i, tt.begin() + j + 1);
        i = j + 1;
    }
    vector<ll> ans(n);
    ans[0] = a[0];
    for(int i = 1; i < n; i++){
        ans[i] = ans[i - 1] + tt[i - 1];
    }
    for(int i = 0; i < n; i++){
        cout << ans[i] <<"  ";
    }
    cout << '
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