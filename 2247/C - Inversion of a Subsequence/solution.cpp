#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const ll MOD = 676767677;
const ll INF = 1e18;
const int N = 1e6 + 5;
 
ll ans = INF;
set<string> st;
vector<pair<int, int>> bb;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n), b(n);
        bool same = true;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
            if(a[i] != b[i]){
                same = false;
            }
        }
        if(same){
            cout << 0 << endl; continue;
        }
        int c0 = 0, c1 = 0, c2 = 0, c3 = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == 1 && b[i] == 0){
                c0++;
            }
            if(a[i] == 1 && b[i] == 1){
                c1++;
            }
            if(a[i] == 0 && b[i] == 1){
                c2++;
            }
            if(a[i] == 0 && b[i] == 0){
                c3++;
            }
        }
        if(c0 & 1){
            cout << 1 << endl; continue;
        }
        if(c0 > 0){
            cout << 2 << endl; continue;
        }
        if(c1 > 0 && c3 > 0){
            cout << 2 << endl; continue;
        }
        cout << -1 << endl;
    }
}