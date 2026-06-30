#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const int N = 1e6 + 5;
 
ll ans = INF;
ll sum = 0;
ll n;
vector<int> a;
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
        vector<int> a(n), b(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        for(int i = 0; i < n; ++i){
            cin >> b[i];
        }
        ll sum = 0;
        bool tt = true; 
        for (int i = 0; i < n; ++i){
            sum += (b[i] - a[i]);
            if(sum < 0) tt = false;
        }
        if(tt) cout << "YES" << endl;
        else cout << "NO" << endl;
    }  
}