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
 
 
int solve(vector <int> &card, vector<int> &id, int k){
    ll mn = 0;
    for(int i = 1; i < k; ++i){
        if(card[id[i]] < card[id[mn]]){
            mn = i;
        }
    }
    return mn;
}
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        int n, k, p, m; cin >> n >> k >> p >> m;
        vector<int> a(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        vector<int> id(n);
        iota(id.begin(), id.end(), 0);
        ll spent = 0, win = 0;
        while(true){
        int idx = -1;
        for(int i = 0; i < k; ++i){
            if(id[i] == p - 1){ 
                idx = i;break;
            }
        }
        if(idx == -1){
            idx = solve(a, id, k);
        }
        int idd = id[idx];
        if(spent + a[idd] > m) break;
        spent += a[idd];
        if(idd == p - 1) ++win;
        id.erase(id.begin() + idx);
        id.push_back(idd);
        }
        cout << win << endl;
 
    }
}