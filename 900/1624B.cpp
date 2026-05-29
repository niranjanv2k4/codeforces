#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){

        int a, b, c;
        cin >> a >> b >> c;

        string res = "NO\n";
        if((a + c) % (2*b) == 0){
            res = "YES\n";
        }
        
        if(2 * b - c > 0 && (2 * b - c) % a == 0){
            res = "YES\n";
        }
        if(2 * b - a > 0 && (2 * b - a) % c == 0){
            res = "YES\n";
        }

        cout << res ;
    }

    return 0;
}