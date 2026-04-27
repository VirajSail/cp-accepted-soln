#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if( x >  -67 && x < 67){
        cout << x + 1 << endl;
    }
    else if( x == -67){
        cout << -66 << endl;
    }
    else if( x == 67){
        cout << 67 << endl;
    }
    }
}