#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, a, b;
    cin >> n >> a >> b;
    int count = 0;
    count = n - max(a+1, n - b) + 1;
    cout << count << endl;
}