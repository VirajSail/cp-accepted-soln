#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int type6[200000], type2[200000], type3[200000], type0[200000];
        int c6 = 0, c2 = 0, c3 = 0, c0 = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x % 6 == 0){
                type6[c6] = x;
                c6++;
            }
            else if(x % 2 == 0){
                type2[c2] = x;
                c2++;
            }
            else if(x % 3 == 0){
                type3[c3] = x;
                c3++;
            }
            else{
                type0[c0] = x;
                c0++;
            }
        }
        for(int i = 0; i < c6; ++i){
            cout << type6[i] << " ";
        }
 
        for(int i = 0; i < c2; ++i){
            cout << type2[i] << " ";
        }
 
        for(int i = 0; i < c0; ++i){
            cout << type0[i] << " ";
        }
 
        for(int i = 0; i < c3; ++i){
            cout << type3[i] << " ";
        }
        cout << endl;
    }
}