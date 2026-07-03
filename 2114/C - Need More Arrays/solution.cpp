#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const ll MOD = 676767677;
const ll INF = 1e18;
const int N = 1e6 + 5;
 
ll ans = INF;
ll sum = 0;
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
        vector<int> a(n), b;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        ll count = 0;
        ll last = -1e9;
        for(int i = 0; i < a.size(); ++i){
            if(a[i] > last + 1){
                ++count; last = a[i];
            }
        }
        cout << count << endl;
    }
}