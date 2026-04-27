#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long k, l;
    cin >> k >> l;
    int importance = 0;
    while( l % k == 0){
        l =  l/k;
        importance++;
    }
    if(l == 1){
    cout << "YES" << endl << importance -1 << endl;
    }
    else{
        cout << "NO" << endl;
    }
}