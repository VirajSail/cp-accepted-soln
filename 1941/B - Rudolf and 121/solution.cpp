#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while (t--){
        int n, count = 0; cin >> n;
        vector<int> a(n), b; bool yes = true, fail = false;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            b.push_back(a[i]);
        }
        for(int i = 1; i < n - 1; ++i){
            int x = a[i - 1];
            a[i - 1] -= x;
            a[i] -= 2 * x;
            a[i + 1] -= x;
            if(a[i] < 0 || a[i + 1] < 0){
                fail = true;
            }
        }
        if(fail){
            cout << "NO" << endl; continue;
        }
 
        for(int i = 0; i < n; ++i){
            if(a[i] != 0) yes = false;
        }
        if(yes) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}