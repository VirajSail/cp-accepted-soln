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
    int n; cin >> n;
    int t; cin >> t;
    map<int, int> m;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        m.insert({x, i + 1});
    }
    vector<int> a(t);
    for(int i = 0; i < t; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < t; i++){
        int x = a[i];
        cout << m[x] << " ";
        int p = m[x];
        for(auto &it : m){
            if(it.second < p)
            it.second++;
            }
        m[x] = 1;
    }
}