#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
const ll MOD = 1000000007;
const ll INF = 1e18;
const int N = 1e6 + 5;
 
ll ans = INF;
set<string> st;
vector<pair<int, int>> bb;
 
map<int, ll> memo;
 
void solve(){
    int n; cin >> n;
    vector<int> a(n + 2, 0);
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        a[x]++;
    }
    int count = 0;
    for(int i = 0; i <= n + 1; ++i){
        if(a[i] == 0){
            cout << i << '
'; return;
        }
        if(a[i] == 1){
            ++count;
            if(count == 2){
                cout << i << '
'; return;
            }
        }
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