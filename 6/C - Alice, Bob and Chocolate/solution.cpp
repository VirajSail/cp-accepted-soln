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
    vector<int> a(n), pf(n, 0), pp(n, 0);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    pf[0] = a[0];
    for(int i = 1; i < n; ++i){
        pf[i] = pf[i - 1] + a[i];
    }
    pp[n - 1] = a[n - 1];
    for(int i = n - 2; i >= 0; --i){
        pp[i] = pp[i + 1] + a[i];
    }
    int i = 0, j = n - 1;
    while(i <= j){
        if(pf[i] <= pp[j]){
            ++i;
        }
        else{
            --j;
        }
    }
    cout << i <<" "<< n - i << '
';
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
}