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
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        if(a[n - 1] == -1 && a[0] != -1){
            a[n - 1] = a[0];
        }
        else if(a[n - 1] == -1 && a[0] == -1){
            a[n - 1] = 0;
        }
        if(a[0] == -1 && a[n - 1] != -1){
            a[0] = a[n -1];
        }
        for(int i = 0; i < n; ++i){
            if(a[i] == -1 && i != n - 1){
                a[i] = 0;
            }
        }
        ll kk = 0, sum = 0;
        for(int i = 0; i < n - 1; ++i){
            b.push_back(a[i + 1] - a[i]);
 
        }
        for(int i = 0; i < b.size(); ++i){
            sum += b[i];
        }
        cout << abs(sum) << endl;
        for(auto x : a) cout << x << "  ";
        cout << endl;
    }
}