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
    ll sum = a[0], ans = a[0];
    for(int i = 1; i < n; i++){
        if((abs(a[i]) % 2) != (abs(a[i - 1]) % 2)){
            sum = max((ll)a[i], sum + a[i]);
        }
        else{
            sum = a[i];
        }
        ans = max(ans, sum);
    }
 
    cout << ans << endl;
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