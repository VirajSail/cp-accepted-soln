#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const int N = 1e6 + 5;
 
ll ans = INF;
ll sum = 0;
vector<ll> a;
set<string> st;
vector<pair<int, int>> bb;
 
void solve(){
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n), b(n), c;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        for(int i = 0; i < n; ++i){
            cin >> b[i];
        }
        map<int, int> A; int count = 1, mx = 0;
        for(int i = 1; i < n; ++i){
            if(a[i] == a[i - 1]){
                ++count;
            }
            else{
                A[a[i - 1]] = max(A[a[i - 1]], count); count = 1;
            }
        }
        A[a[n - 1]] = max(A[a[n - 1]], count);
        map<int, int> B; count = 1; mx = 0;
        for(int i = 1; i < n; ++i){
            if(b[i] == b[i - 1]){
                ++count;
            }
            else{
                B[b[i - 1]] = max(B[b[i - 1]], count); count = 1;
            }
        }
        B[b[n - 1]] = max(B[b[n - 1]], count);
        int ans = 0;
        for (auto [x, len] : A) ans = max(ans, len + B[x]);
        for (auto [x, len] : B) ans = max(ans, len + A[x]);
        cout << ans << endl;
    }
}