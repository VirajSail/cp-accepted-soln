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
    int n, k; cin >> n >> k;
    if(k == n - 1){
        cout << -1 << endl; return;
    }
    int tt = (n + 1) / 2, kk = n / 2;
    int ll = n - k;
    int b0 = (ll + 1) / 2, b1 = ll / 2;
    int a0 = tt - b0, a1 = kk - b1;
    string s = "";
    char ch = '0';
    for(int i = 1; i <= ll; i++){
        if(ch == '0'){
            s += '0';
            if(a0 > 0){
                for(int j = 0; j < a0; j++){
                    s += '0';
                }
                a0 = 0;
            }
            ch = '1';
        }
        else{
            s += '1';
            if(a1 > 0){
                for(int j = 0; j < a1; j++){
                    s += '1';
                }
                a1 = 0;
            }
            ch = '0';
        }
    }
 
    cout << s << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
}