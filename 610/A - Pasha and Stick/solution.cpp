#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;
    cin >> n;
    if(n % 2 != 0){
        cout << 0;
    }
    else{
        long long k = n/2;
        if(k % 2 == 0){
            cout << k/2 -1;
        }
        else{
            cout << k/2;
        }
    }
}
 