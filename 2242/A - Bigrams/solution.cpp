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
        int k; cin >> k;
        vector<int> c(k);
        int tt = 0, kk = 0;
        for(int i = 0; i < k; i++){
            cin >> c[i];
            if(c[i] >= 3){
                tt++;
            }
            if(c[i] >= 2){
                kk++;
            }
        }
        if(tt >= 1 || kk >= 2){
            cout << "YES
";
        }
        else{
            cout << "NO
";
        }
    }
}