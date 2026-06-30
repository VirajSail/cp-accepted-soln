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
        int x, y; cin >> x >> y;
        if(x < y) cout << "NO" << endl;
        else if(x % y == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
 
    }
 
 
 
}