#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const ll MOD = 676767677;
const ll INF = 1e18;
const int N = 1e6 + 5;
 
ll ans = INF;
set<string> st;
vector<pair<int, int>> bb;
 
ll solve(vector<ll> &a, ll last, ll end, ll k){
    if((end - last + 1) < k) return 0;
    else{
        ll m = end - last + 1;
        return (m - k + 1) * (m - k + 2) / 2;
    }
}
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        map<ll, int> mp;
        ll sum = 0;
        ll ans = 0;
        for(int i = 0; i < n; i++){
            sum += a[i];
            mp[a[i]]++;
            if(sum % 2 == 0){
                ll need = sum / 2;
                if(mp.count(need)){
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}