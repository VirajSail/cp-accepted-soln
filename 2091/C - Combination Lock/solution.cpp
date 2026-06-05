#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> a(n); bool yes = true;
        if(n % 2 == 0 ) yes = false;
        for(int i = 0; i < n; ++i){
            int pos = (2 * i) % n;
            a[pos] = i + 1;
        }
        if(yes){
        for(auto x : a) cout << x << " ";
            cout << endl;
        }
        else cout << -1 << endl;
    }
}