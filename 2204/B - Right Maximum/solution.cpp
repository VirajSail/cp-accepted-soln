#include <iostream>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int count = 0;
        int cur_max = 0;   // all a_i >= 1, so 0 works as initial minimum
 
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (x >= cur_max) {
                ++count;
                cur_max = x;
            }
        }
 
        cout << count << '
';
    }
 
    return 0;
}