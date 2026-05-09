#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int a[105];
    for(int i = 1; i < n; i++) {
        cin >> a[i];
    }
    int x, y, s = 0;
    cin >> x >> y;
    for(int i = x; i < y; i++) {
        s += a[i];
    }
    cout << s;
}