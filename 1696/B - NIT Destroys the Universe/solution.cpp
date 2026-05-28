#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        vector<int> a(n);
        bool yes = false;
        int count = 0;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        for(int i = 0; i < n; ++i){
            if(a[i] != 0 && yes == false){
                ++count;
                if(count >= 2) count = 2;
                yes = true;
            }
            else if(a[i] == 0){
                yes = false;
            }
        }
        cout << count << endl;
    }
}