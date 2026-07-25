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
    int n, d, h; cin >> n >> d >> h;
    vector<ll> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    double tt = (1.0 / 2.0) * d * h * n;
    double oh = 0;
    for(int i = 0; i < n - 1; ++i){
        oh = (h + a[i]) - a[i + 1];
        if(oh > 0){
            double ob = (d * 1.0 / h) * oh * 1.0;
            tt -= (1.0 / 2.0) * ob * oh;
        }
    }
    cout << fixed << setprecision(10) << tt << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
}