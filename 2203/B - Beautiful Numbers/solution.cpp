#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        vector<int> a;
        int sum = 0;
        for(int i = 0; i < s.size(); ++i){
            int x = s[i] - '0';
            sum += x;
            if(i == 0) a.push_back(x - 1);
            else a.push_back(x);
        }
        if(sum <= 9){
            cout << 0 << endl;
            continue;
        }
        sort(a.rbegin(), a.rend());
        int cur = 0, ans = 0;
        for(int i = 0; i < a.size(); ++i){
            cur += a[i];
            ++ans;
            if(sum - cur <= 9){
                break;
            }
        }
        cout << ans << endl;
    }
}