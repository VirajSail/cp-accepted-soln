#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while (t--){
        int n; cin >> n; bool yes = true;
        if(n < 5) yes = false;
        vector<int> a; a.push_back(2);
        for(int i = 4; i <= n; i += 2){
            a.push_back(i);
            if(i == 4){
                a.pop_back();
            }
        }
        a.push_back(4); a.push_back(5);
        for(int i = 1; i <= n; i += 2){
            a.push_back(i);
            if(i == 5){
                a.pop_back();
            }
        }
        if(yes){
        for(auto x : a){
            cout << x << " ";
            }
        cout << endl;
        }
        else cout << -1 << endl;
    }
}