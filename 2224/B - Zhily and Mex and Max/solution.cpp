#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const ll MOD = 676767677;
const ll INF = 1e18;
const int N = 1e6 + 5;
 
ll ans = INF;
set<string> st;
vector<pair<int, int>> bb;
 
int solve(vector<int> &a, int n){
     vector<int> f(n + 2, 0);
    for(int i = 0; i < n; i++){
        if(a[i] <= n)
            f[a[i]]++;
    }
    for(int i = 0; i <= n; i++){
        if(f[i] == 0)
            return i;
    }
    return n + 1;
}
int maxx(vector<ll> &a, int n){
    int tt = *max_element(a.begin(), a.begin() + n);
    return tt;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> a(n), b;
        bool yes = false;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            if(a[i] == 0) yes = true;
        }
        if(!yes){
            int tt = *max_element(a.begin(), a.end());
            cout << 1LL * tt * n << endl; continue;
        }
        ll sum = 0, kk = 0;
        ll tt = maxx(a, n);
        b.push_back(tt);
        vector<ll> uni, dup;
        for(int i = 0; i < n; ++i){
            if(a[i] == tt){
                kk = i;
            }
        }
        a.erase(a.begin() + kk);
        sort(a.begin(), a.end());
        if (!a.empty()){
            if (a[0] == tt) dup.push_back(a[0]);
            else uni.push_back(a[0]);
        }
        for(int i = 1; i < a.size(); ++i){
            if(a[i] == a[i - 1] || a[i] == tt){
                dup.push_back(a[i]);
            }else{
                uni.push_back(a[i]);
            }
        }
        for(auto x : uni) b.push_back(x);
        for(auto x : dup) b.push_back(x);
        ll mex = 0;
        vector<bool> vis(n + 2, false);
        for(int i = 0; i < n; ++i){
            if(b[i] <= n + 1){
                vis[b[i]] = true;
            }
            while(vis[mex]){
                mex++;
            }
            sum += (1LL * tt + mex);
        }
 
        cout << sum << endl;
 
    }
}