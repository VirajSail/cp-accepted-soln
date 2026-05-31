#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        bool yes = true;
        int c1 = 0, c0 = 0;
        for(int i = 0; i < n; ++i){
            if(s[i] == '1') ++c1;
            else if(s[i] == '0') ++c0;
        }
        if(c0 == s.size()){
            cout << 0 << endl; 
            yes = false;
        }
        else if(c1 % 2 != 0 && c0 % 2 == 0){
           cout << -1 << endl;
           yes = false;
        }
        vector<int> m;
        for(int i = 0; i < n; ++i){
            if(c1 % 2 == 0 && c0 % 2 != 0 || c1 % 2 != 0 && c0 % 2 != 0){
                if(s[i] == '0') m.push_back(i + 1);
            }
            else if(c1 % 2 == 0 && c0 % 2 == 0){
                if(s[i] == '1') m.push_back(i + 1);
            }
        }
        if(yes){
            cout << m.size() << endl;
            for(int i = 0; i < m.size(); ++i){
                cout << m[i] <<"  ";
            }
            cout << endl;
        }
 
    }
}