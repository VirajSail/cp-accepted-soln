#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        string s; cin >> s;
        int counta = 0, countb = 0;
        for(int i = 0; i < n; ++i){
            if(s[i] == 'b') ++countb;
            if(s[i] == 'a') ++counta;
        }
            vector<ll> pos;
            for(int i = 0; i < n; ++i){
                if(s[i] == 'b') pos.push_back(i);
            }
            if(pos.empty()){
                cout << 0 << endl; continue;
            }
            for(int i = 0; i < pos.size(); ++i){
                pos[i] -= i;
            }
            ll med = pos[pos.size() / 2];
            ll sum = 0;
            for(int i = 0; i < pos.size(); ++i){
                sum += abs(pos[i] - med);
            }
            vector<ll> kk;
            for(int i = 0; i < n; ++i){
                if(s[i] == 'a') kk.push_back(i);
            }
            for(int i = 0; i < kk.size(); ++i){
                kk[i] -= i;
            }
            if(kk.empty()){
                cout << 0 << endl;
                continue;
            }
            ll medd = kk[kk.size() / 2];
            ll summ = 0;
            for(int i = 0; i < kk.size(); ++i){
                summ += abs(kk[i] - medd);
            }
            cout << min(sum, summ) << endl;
    }
}