#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;
    cin >> n;
    if(n % 4 == 2 || n % 4 == 1){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }
}