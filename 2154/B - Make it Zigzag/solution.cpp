#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        int sum = 0;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        int pref = a[0];
        for(int i = 0; i < n; ++i){
            pref = max(pref, a[i]);
            if(i % 2 == 1 && pref > a[i]) a[i] = pref;
        }
        for(int i = 1; i < n; i+= 2){
            int need = 0;
            if(a[i - 1] >= a[i]){
               need = max(need, a[i - 1] - a[i] + 1);
               a[i - 1] = min(a[i - 1], a[i] - 1);
               sum += need;
 
            }
            if(i + 1 < n && a[i] <= a[i + 1]){
                need = max(need, a[i + 1] - a[i] + 1 );
                a[i + 1] = min(a[i + 1], a[i] - 1);
                sum += need;
            }
 
        }
        cout << sum << endl;
 
    }
}