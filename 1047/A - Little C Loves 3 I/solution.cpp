#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
    
    if (n % 3 == 0 || n % 3 == 1) {
        // Example: n=3 → 1,1,1; n=4 → 1,1,2
        cout << "1 1 " << n - 2 << endl;
    } else { // n % 3 == 2
        // Example: n=5 → 1,2,2; n=8 → 1,2,5
        cout << "1 2 " << n - 3 << endl;
    }
    
    return 0;
}