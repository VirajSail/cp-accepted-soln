#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int count = 0;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        int maxstreak = 0;
        for(int i = 0; i < n; ++i){
            if(a[i] == 0){
                ++count;
                maxstreak = max(maxstreak, count);
            }
            else{
                count = 0;
            }
        }
        cout << maxstreak << endl;
    }
}