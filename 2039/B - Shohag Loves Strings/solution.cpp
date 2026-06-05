#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while (t--){
        string s; cin >> s; bool yes = false, one = false;
        if(s.size() < 3) yes = false;
        vector<char> m;
        for(int i = 0; i < (int)s.size() - 1; ++i){
            if(s[i] == s[i + 1]){
                m.push_back(s[i]);
                m.push_back(s[i + 1]);
                yes = true;
                break;
            }
        }
        if(!yes){
            for(int i = 0; i < (int)s.size() - 2; ++i){
                int k = s[i];
                if(s[i + 1] != k && s[i + 2] != s[i + 1] && s[i + 2] != k){
                    m.push_back(s[i]); m.push_back(s[i + 1]); m.push_back(s[i + 2]);
                    one = true;
                    break;
                }
            }
        }
        if(yes || one ){
            for(auto x : m){
                cout << x;
            }
            cout << endl;
        }
        else cout << -1 << endl;
 
    }
}