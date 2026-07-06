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
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> v;
        int count = 1;
        for(int i = 1; i < n; i++){
            if(a[i] == a[i - 1]){
                count++;
            }
            else{
                v.push_back(count);
                count = 1;
            }
        }
        v.push_back(count);
        int m = v.size();
        sort(v.begin(), v.end());
        vector<ll> ss(m + 1, 0);
        for(int i = m - 1; i >= 0; i--){
            ss[i] = ss[i + 1] + v[i];
        }
        ll ans = 0;
        for(int i = 0; i < m; i++){
            if(i == 0 || v[i] > v[i - 1]){
                ll sz = m - i;
                ll sum = ss[i]; 
                ll tt = k - sum;
                if(tt % sz != 0){
                    continue;
                }
                ll x = tt / sz;
                if(x >= 1 - v[i]){
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}