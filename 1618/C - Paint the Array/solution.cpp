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
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> a(n), b, c;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            if(i % 2 == 0 || i == 0) b.push_back(a[i]);
            else if(i % 2 != 0 && i > 0) c.push_back(a[i]);
        }
        ll g = b[0];
        for(int i = 1; i < b.size(); ++i){
            g = __gcd(g, b[i]);
        }
        if(c.empty()){
            cout << g << endl;
            continue;
        }
        ll gg = c[0];
        for(int i = 1; i < c.size(); ++i){
            gg = __gcd(gg, c[i]);
        }
        bool yes = true;
        for(int i = 0; i < b.size(); ++i){
            if(b[i] % gg == 0){
                yes = false; break;
            }
        }
        if(yes){
            cout << gg << endl; continue;
        }
        yes = true;
        for(int i = 0; i < c.size(); ++i){
            if(c[i] % g == 0){
                yes = false; break;
            }
        }
        if(yes){
            cout << g << endl; continue;
        }
        cout << 0 << endl;
 
    }
}