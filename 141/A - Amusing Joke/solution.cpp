#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string a, b, c;
    cin >> a >> b >> c;
    int f1[26] = {0}, f2[26] = {0};
    for(int i = 0; i < a.size(); i++) {
        f1[a[i] - 'A']++;
    }
    for(int i = 0; i < b.size(); i++) {
        f1[b[i] - 'A']++;
    }
    for(int i = 0; i < c.size(); i++) {
        f2[c[i] - 'A']++;
    }
    for(int i = 0; i < 26; i++) {
        if(f1[i] != f2[i]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}