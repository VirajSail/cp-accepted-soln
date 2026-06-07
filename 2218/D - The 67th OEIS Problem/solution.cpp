#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<ll> a; ll mm = 0;
        vector<ll> pp;
        vector<bool> isPrime(200000, true);
        for(int i = 2; i < 200000; i++){
            if(isPrime[i]){
                pp.push_back(i);
                for(int j = i + i; j < 200000; j += i)  isPrime[j] = false;
            }
        }
        for(int i = 0; i < n; ++i){
            mm = pp[i]  * pp[i + 1] * 1LL;
            a.push_back(mm);
        }
        if(n == 1) cout << 1 << endl;
        else if(n == 2)cout << 1 <<"  " << 2 << endl;
        else for(auto x : a) cout << x <<"  ";
            cout << endl;
    }
}