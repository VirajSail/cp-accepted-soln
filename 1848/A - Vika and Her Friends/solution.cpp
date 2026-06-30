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
        int n, m, k; cin >> n >> m >> k;
        int x, y; cin >> x >> y;
        bool flag = true;
        for(int i = 0; i < k; ++i){
            int a, b; cin >> a >> b;
            if((a + b) % 2 == (x + y) % 2){
                flag = false;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}