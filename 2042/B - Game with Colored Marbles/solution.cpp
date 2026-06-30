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
        vector<int> a(n);
        map<int, int> f;
        for(int i = 0; i < n; ++i){
            cin >> a[i]; f[a[i]]++;
        }
        ll count = 0;
        for(auto x : f){
            if(x.second == 1) ++count;
        }
        ll total = (count + 1) / 2; total *= 2;
        for (auto it = f.begin(); it != f.end();){
            if(it->second == 1) it = f.erase(it);
            else ++it;
        }
        cout << total + f.size() << endl;
    }
}