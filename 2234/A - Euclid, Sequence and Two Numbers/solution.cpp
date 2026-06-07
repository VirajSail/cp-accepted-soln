#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
 
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> a(n);
        bool bad = true;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        for(int i = 0; i < n - 2; ++i){
            if(a[i + 2] !=  a[i] % a[i + 1])
                bad = false;
        }
        if(bad) cout << a[0] <<"  " << a[1] << endl;
        else cout << -1 << endl;
    }
}