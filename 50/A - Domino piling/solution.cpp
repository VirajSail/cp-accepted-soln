#include <bits/stdc++.h>
using namespace std;
 
int main(){
        int M, N;
        cin >> M >> N;
        if(M % 2 == 0){
            cout << N * (M/2) << endl;
        }
        else if(M == N){
            cout << (N * (M/2)) + M/2 << endl;
        }
        else if(M % 3 == 0){
            cout << (N * (M/2)) + N/2 << endl;
        }
        else if( M == 1){
            cout << N/2 << endl;
        }
        else if(M % 3 != 0){
            cout << (N * (M/2))+ N/2 << endl;
        }
 
        }