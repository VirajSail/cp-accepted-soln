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
        vector<int> a(n);
        ll sum = 0, c1 = 0, c2 = 0;
        bool yes = false;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            sum += a[i];
            if(a[i] == 1) ++c1;
            else ++c2;
        }
        if(n % 2 == 0 && sum % 4 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
 
 
    }
}