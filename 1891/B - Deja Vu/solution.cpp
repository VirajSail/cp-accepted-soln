#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const int N = 1e5 + 10;
 
ll pc[N];
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i = 1; i <= 30; ++i){
        pc[i] = pow(2, i);
    }
 
    int t; cin >> t;
    while (t--){
        int n, q; cin >> n >> q;
        vector<int> a(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        vector<int> useful;
        int mn = 31;
        for(int i = 0; i < q; ++i){
            int x; cin >> x;
            if(x < mn){
                useful.push_back(x); mn = x;
            }
        }
        for(int i = 0; i < useful.size(); ++i){
            ll num = pc[useful[i]];
            for(int j = 0; j < n; ++j){
                if(a[j] % num == 0){
                    a[j] += num / 2;
                }
            }
        }
        for(auto x : a) cout << x <<"  ";
            cout << endl;
    }
}