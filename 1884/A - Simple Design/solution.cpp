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
 
 
int solve(int n){
    ll sum = 0;
    while(true){
        int kk = n % 10;
        sum += kk;
        n /= 10;
        if(n == 0){
            return sum; break;
        }
    }
    
}
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        int x, k; cin >> x >> k;
        while(true){
            if(solve(x) % k == 0){
                cout << x << endl; break;
            }
            else{
                ++x;
            }
        }
    }
}