#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
    cin >> n >> a >> b;
    if(n % 2 == 0 && a + b <= n - 2){
        cout << "YES" << endl;
    }
    else if(a == n && b == n){
        cout << "YES" << endl;
    }
    else if( n % 2 == 0 && a + b > n - 2){
        cout << "NO" << endl;
    }
    else if( n % 2 != 0 && a + b <= n - 2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    }
 
}