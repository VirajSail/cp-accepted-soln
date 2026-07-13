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
        set<char> t;
        int n; cin >> n;
        string s; cin >> s;
        ll sum = 0, count = 0;
        for(int i = 0; i < s.size(); ++i){
            t.insert(s[i]);
            sum += t.size();
        }
        cout << sum << endl;
    }
}