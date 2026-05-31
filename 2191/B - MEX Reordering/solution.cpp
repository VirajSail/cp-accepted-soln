#include <bits/stdc++.h>
using namespace std;
 
int mex(vector<int> v){
    vector<int> vis(v.size() + 5, 0);
 
    for(int x : v){
        if(x >= 0 && x < (int)vis.size())
            vis[x] = 1;
    }
 
    for(int i = 0; ; i++){
        if(!vis[i]) return i;
    }
}
 
bool check(vector<int> a){
    int n = a.size();
 
    for(int i = 0; i < n - 1; i++){
        vector<int> L(a.begin(), a.begin() + i + 1);
        vector<int> R(a.begin() + i + 1, a.end());
 
        if(mex(L) == mex(R))
            return false;
    }
 
    return true;
}
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
 
        vector<int> asc = a;
        sort(asc.begin(), asc.end());
 
        vector<int> desc = a;
        sort(desc.rbegin(), desc.rend());
 
        if(check(asc) || check(desc))
            cout << "YES
";
        else
            cout << "NO
";
    }
}