#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m)); 
        ll tt = 0, sum = 0, kk = 0;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                    cin >> a[i][j];
            }
        }
        ll ans = 0;
        for(int col = 0; col < m; ++col){
            vector<ll> v;
 
            for(int row = 0; row < n; ++row){
                v.push_back(a[row][col]);
            }
            sort(v.begin(), v.end());
            for(int i = 0; i < n; ++i){
                ans += 1LL * v[i] * (2LL * i - n + 1);
            }
        }
        cout << ans << endl;
    }
}