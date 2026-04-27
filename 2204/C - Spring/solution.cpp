#include <bits/stdc++.h>
using namespace std;
 
long long lcm_ll(long long a, long long b){
    return (a / __gcd(a, b)) * b;
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b, c, m;
        cin >> a >> b >> c >> m;
 
        long long moda = m / a;
        long long modb = m / b;
        long long modc = m / c;
 
        long long ab  = m / lcm_ll(a, b);
        long long ac  = m / lcm_ll(a, c);
        long long bc  = m / lcm_ll(b, c);
        long long abc = m / lcm_ll(a, lcm_ll(b, c));
 
        long long onlyA = moda - ab - ac + abc;
        long long onlyB = modb - ab - bc + abc;
        long long onlyC = modc - ac - bc + abc;
 
        long long AB = ab - abc;
        long long AC = ac - abc;
        long long BC = bc - abc;
 
        long long cal4 = onlyA*6 + AB*3 + AC*3 + abc*2;
        long long cal5 = onlyB*6 + AB*3 + BC*3 + abc*2;
        long long cal6 = onlyC*6 + AC*3 + BC*3 + abc*2;
 
        cout << cal4 << " " << cal5 << " " << cal6 << "
";
    }
}