#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        ll sum = 0, count = 0;
        for(auto c : s){
            if(c == '1'){
                ++count;
            }
            else{
                if(count > 0){
                sum += count + 1;
                }
            }
        }
        cout << sum << endl;
    }
}