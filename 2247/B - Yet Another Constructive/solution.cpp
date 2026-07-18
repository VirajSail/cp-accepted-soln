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
        ll n, k, m; cin >> n >> k >> m;
        if(k > m){
            cout << "NO" << endl; continue;
        }
        cout << "YES" << endl;
        for(int i = 1; i < k; i++){
            cout << m + 1 << " ";
        }
        cout << m - k + 1;
        for(int i = k + 1; i <= n; i++){
            cout << " " << 1;
        }
        cout << endl;
    }
}