#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while (t--){
        int a, b, c, d; cin >> a >> b >> c >> d;
        int s = 0, sl = 0, count = 0;
        vector<pair<int, int>> x = {{a, b}, {b, a}};
        vector<pair<int, int>> y = {{c, d}, {d ,c}};
        for(auto m : x){
            for(auto z : y){
                int s = 0, sl = 0;
                if(m.first > z.first) ++s;
                else if(m.first < z.first) sl++;
                if(m.second > z.second) ++s;
                else if(m.second < z.second) ++sl;
                if(s > sl) ++count;
            }
        }
        cout << count << endl;
    }
}