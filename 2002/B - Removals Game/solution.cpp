#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while (t--){
        int n; cin >> n; bool one = true, yes = true;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        for(int i = 0; i < n; ++i){
            cin >> b[i];
        }
        for(int i = 0; i < n; ++i){
            if(a[i] != b[i]){
                yes = false;
                break;
            }
        }
        for(int i = 0, j = n - 1; i < n && j >= 0; ++i, --j){
            if(a[i] != b[j]){
                one = false;
                break;
            }
        }
        if(!yes && !one) yes = false;
        else yes = true;
        if(yes) cout << "Bob" << endl;
        else cout << "Alice" << endl;
    }
}