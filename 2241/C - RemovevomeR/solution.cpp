#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const int N = 1e6 + 5;
 
ll ans = INF;
ll sum = 0;
ll n;
vector<int> a;
set<string> st;
vector<pair<int, int>> bb;
 
void solve(){
 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int tt = 1, count = 0;
        for(int i = 1; i < n; i++){
            if(s[i] != s[i - 1]) count++;
        }
        bool z = false, o = false;
        for(char c : s){
            if(c == '0') z = true;
            else o = true;
        }
        if(z && o && count <= 1) tt = 2;
        cout << tt << endl;
    }
}