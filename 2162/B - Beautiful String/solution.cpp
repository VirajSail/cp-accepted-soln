#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
bool palin(string s){
    int l = 0; int r = s.size() - 1;
    while(l < r){
        if(s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        vector<int> m; bool ok =  palin(s);
        for(int i = 0; i < n; ++i){
            if(s[i] == '0'){
                m.push_back(i + 1);
            }
        }
        if(ok) cout << 0 << endl << endl;
        else{
            cout << m.size() << endl;
            for(auto p : m){
                cout << p <<"  ";
            }
            cout << endl;
        }
    }
}