#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n; bool yes = true;
        string s; cin >> s;
        if(n % 2 == 0){
            for(int i = 0; i < n; i += 2){
                if(s[i] == 'a' && s[i + 1] == 'a' || s[i] == 'b' && s[i + 1] == 'b'){
                    yes = false;
                    break;
                }
            }
        }
        if(n % 2 != 0){
            if(s[0] == 'b'){
                yes = false;
            }
            else{
            for(int i = 1; i < n; i += 2){
                    if(s[i] == 'a' && s[i + 1] == 'a' || s[i] == 'b' && s[i + 1] == 'b'){
                        yes = false;
                        break;
                    }
                }
            }
        }
        if(!yes) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}