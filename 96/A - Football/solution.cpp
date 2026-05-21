#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    string s; cin >> s;
    int count1 = 0, count = 0;
    bool yes = true;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == '1'){
            count = 0;
            ++count1;
            if(count1 == 7){
                yes = false;
                break;
            }
        }
        else{
            count1 = 0;
            ++count;
            if(count == 7){
                yes = false;
                break;
            }
        }
    }
    if(yes) cout << "NO" << endl;
    else cout << "YES" << endl;
}