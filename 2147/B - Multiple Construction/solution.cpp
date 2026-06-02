#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> ans;
        for(int i = n; i >= 1; --i) ans.push_back(i);
        ans.push_back(n);
        for(int i = 1; i <= n - 1; ++i) ans.push_back(i);
        for(int x : ans) cout << x << " ";
        cout << endl;
    }
}