#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const int N = 1e6 + 5;
int s[N];
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    for(int i = 0; i < N; ++i){
        s[i] = i;
    }
    for(int i = 2; i * i < N; ++i){
        if(s[i] == i){
            for(int j = i * i; j < N; j += i){
                if(s[j] == j){
                    s[j] = i;
                }
            }
        }
    }
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int x = n;
        int a = 0, b = 0;
        while(x > 1){
            int p = s[x];
            ++b;
            while(x % p == 0){
                ++a;
                x /= p;
            }
        }
        cout << a + b - 1 << endl;
    }
}