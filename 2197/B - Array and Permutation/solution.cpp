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
        int n; cin >> n;
        vector<int> p(n), a(n);
        for(int i = 0; i < n; ++i){
            cin >> p[i];
        }
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        int fp = 0, ip = 0;
        bool yes = true;
        vector<int> pos(n + 1);
        for(int i = 0; i < n; i++){
            pos[p[i]] = i;
        }
        for(int i = 0; i < n - 1; i++){
            int ip = pos[a[i]]; int nxt = pos[a[i + 1]];
            if(nxt < ip){
                yes = false; break;
            }
        }
        if(!yes) cout << "NO" << endl;
        else cout << "YES" << endl;
        
    }
}