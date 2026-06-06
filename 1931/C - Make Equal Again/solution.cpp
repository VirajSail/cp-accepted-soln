#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
 
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> a(n); bool bad = true, yes = true;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        if(a[0] == a[n - 1]){
            int vl = a[0], cost = 0, mm = 0, mf = 0;
            for(int i = n - 1; i >= 0; --i){
                if(a[i] == vl){
                    mm = i;
                }
                else break;
            }
            for(int i = 0; i < n; ++i){
                if(a[i] == vl){
                mf = i;
                }
                else break;
            }
            for(int i = mf + 1; i < mm; ++i){
                ++cost;
            }
            cout << cost << endl;
        }
        else if(a[0] != a[n - 1]){
            int vll = a[n - 1], mmm = 0, mff = 0;
            for(int i = n - 1; i >= 0; --i){
                if(a[i] == vll){
                    mmm = i;
                }
                 else break;
            }
            int cost = 0, costt = 0;
            for(int i = 0; i < mmm; ++i){
                ++cost;
            }
            int vlll = a[0];
            for(int i = 1; i < n; ++i){
                if(a[i] == vlll){
                    mff  = i;
                }
                else break;
            }
            for(int i = mff + 1; i < n; ++i){
                ++costt;
 
            }
            cout << min(costt, cost) << endl;
        }
    }
}