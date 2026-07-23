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
    int n, k; cin >> n >> k;
    if(k == (n * n) - 1){
        cout << "NO" << endl; return;
    }
    cout << "YES" << endl;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(k > 0){
                cout << "U"; k--;
            }
            else if(i ==  n - 1){
                if(j ==  n - 1) cout << "L";
                else cout << "R";
            }
            else cout << "D";
        }
        cout << endl;
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