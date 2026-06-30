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
 
    int g, c, l; cin >> g >> c >> l;
    a.push_back(g); a.push_back(c); a.push_back(l);
    int tt = max({g, c, l});
    int kk = min({g, c, l});
    sort(a.begin(), a.end());
    if(abs(tt - kk) >= 10) cout << "check again" << endl;
    else cout << "final"<<" "<<a[1] << endl;
}