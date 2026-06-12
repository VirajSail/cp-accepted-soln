#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;
        bool yes = true;
        for (int i = 0; i < k; i++){
            int ones = 0;
            for (int j = i; j < n; j += k){
                if (s[j] == '1')
                    ones++;
            }
            if (ones % 2){
                yes = false;
                break;
            }
        }
        if(yes) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}