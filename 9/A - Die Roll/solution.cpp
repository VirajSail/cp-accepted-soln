#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int y, w;
    cin >> y >> w;
 
    int m = max(y, w);
    int a = 6 - m + 1;
    int b = 6;
 
    for(int i = min(a, b); i >= 1; i--) {
        if(a % i == 0 && b % i == 0) {
            a /= i;
            b /= i;
            break;
        }
    }
 
    cout << a << "/" << b;
}