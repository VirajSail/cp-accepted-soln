#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> a, b;
        for(int i = 0; i < n - 1; ++i){
            int k; cin >> k;
            a.push_back(k);
        }
        b.push_back(10000);
        for(int i = 0; i < a.size(); ++i){
            b.push_back(b.back() + a[i]);
        }
        for(int i = 0; i < b.size(); ++i){
            cout << b[i] <<" ";
        }
        cout << endl;
    }
}