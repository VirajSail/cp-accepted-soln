#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int a[7];
        for(int i = 0; i < 7; ++i){
            cin >> a[i];
            a[i] = - a[i];
        }
        for(int i = 0; i < 7; ++i){
            int minindex = i;
            for(int j = i + 1; j < 7; ++j){
                if(a[j] < a[minindex]){
                    minindex = j;
                }
            }
            swap(a[i], a[minindex]);
        }
        a[0] = - a[0];
        int sum = 0;
        for(int i = 0; i < 7; ++i){
            sum += a[i];
        }
        cout << sum << endl;
    }
}