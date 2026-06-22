#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n; cin >> n;
    vector<int> a(2 * n);
    for(int i = 0; i < 2 * n; ++i){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll ans = 1e18;
    for(int i = 0; i < 2 * n; ++i){
        for(int j = i + 1; j < 2 * n; ++j){
            vector<int> v;
            for(int k = 0; k < 2 * n; ++k){
                if(k != i && k != j){
                    v.push_back(a[k]);
                }
            }
            ll gap = 0;
            for(int k = 0; k < v.size(); k += 2){
                gap += v[k + 1] - v[k];
            }
            ans = min(ans, gap);
        }
    }
    cout << ans << endl;
}