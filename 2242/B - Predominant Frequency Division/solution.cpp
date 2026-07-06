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
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> s1(n + 1, 0);
    vector<int> s2(n + 1, 0);
    for(int i = 1; i <= n; i++){
        s1[i] = s1[i - 1];
        if(a[i - 1] == 1){
            s1[i]++;
        }
        else{
            s1[i]--;
        }
        s2[i] = s2[i - 1];
        if(a[i - 1] == 3){
            s2[i]--;
        }
        else{
            s2[i]++;
        }
    }
    vector<int> mx(n + 1, -1e9);
    mx[n - 1] = s2[n - 1];
    for(int i = n - 2; i >= 1; i--){
        mx[i] = max(mx[i + 1], s2[i]);
    }
    bool ok = false;
    for(int i = 1; i <= n - 2; i++){
        if(s1[i] < 0){
            continue;
        }
        if(mx[i + 1] >= s2[i]){
            ok = true;
            break;
        }
    }
    if(ok){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
}