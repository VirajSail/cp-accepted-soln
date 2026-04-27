#include <iostream>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        if(n <= 6){
            cout << "NO
";
        }
        else if(n % 3 != 0){
            cout << "YES
";
            cout << 1 << " " << 2 << " " << n-3 << endl;
        }
        else{
            if(n == 9){
                cout << "NO
";
            } else {
                cout << "YES
";
                cout << 1 << " " << 4 << " " << n-5 << endl;
            }
        }
    }
}