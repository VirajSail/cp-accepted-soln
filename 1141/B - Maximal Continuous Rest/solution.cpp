#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int n; cin >> n;
    int a[n];
    int k = 0, count = 0;        
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i){
        if(a[i] == 1){
            ++count;
            k = max(count, k);
        }
        else{
            count = 0;
        }
    }
    int l = 0, r = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] == 1){
            ++l;
        }
        else break;
 
    }
    for(int i = n - 1; i >= 0; --i){
        if(a[i] == 1) ++r;
        else break;
    }
     k = max(k, l + r);
     cout << k << endl;
}