#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count1 = 0, count2 = 0;
        for(int i = 0; i < n; ++i){
            if(s[i] == '('){
                ++count1;
            }
            else{
                ++count2;
            }
        }
        if(count1 == count2){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
}