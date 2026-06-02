#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n), b;
        int first = -1, last = -1, count = 0;;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        int c = 0;
        vector<int> v(n + 1, 0);
        for(int i = 0; i < n; i++){
            if(a[i] != 0)
            v[a[i]] = 1;
        }
        for(int i = 1; i <= n; i++){
            if(!v[i]) b.push_back(i);
        }
        for(int i = 0; i < n; ++i){
            if(a[i] == 0){
                a[i] = b.back();
                b.pop_back();
            }
        }
        int L = -1, R = -1;
 
        for(int i = 0; i < n; i++){
        if(a[i] != i + 1){
            if(L == -1) L = i;
            R = i;
            }
        }
 
        if(L == -1) cout << 0 << '
';
        else cout << R - L + 1 << '
';
    }
}