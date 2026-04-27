#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
 
        int a[n];
        bool found = false;
 
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            if(a[i] == 67){
                found = true;
            }
        }
 
        if(found){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}