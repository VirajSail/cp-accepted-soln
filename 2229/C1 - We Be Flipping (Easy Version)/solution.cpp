#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[n];
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        vector<int> v;
        bool yes = false;
        for(int i = n - 1; i >= 0; --i){
            ll x = a[i];
            if(yes)
                x = -x;
            if(x > 0){
                v.push_back(i + 1);
                yes = !yes;
            }
        }
        cout << v.size() << endl;
        for(int i = 0; i < v.size(); ++i){
            cout << v[i] << " ";
        }
        cout << endl;
    }
}