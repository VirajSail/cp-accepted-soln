#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, m;
    cin >> n >> m;
    int a[n];
    int sum = 0;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i){
        int minindex = i;
        for(int j = i + 1; j < n; ++j){
            if(a[j] < a[minindex]){
                minindex = j;
            }
        }
        swap(a[i], a[minindex]);
    }
    for(int i = 0; i < m && a[i] < 0; ++i){
        sum += abs(a[i]);
    }
    cout << sum << endl;
}