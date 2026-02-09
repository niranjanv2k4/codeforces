#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        int curr = 1, factor = 1;
        int res = 0, tot = 0;

        while(curr <= n){
            if(curr <= n){
                res++;
            }
            curr += factor;
            tot++;
            if(tot == 9){
                tot = 0;
                factor *= 10;
            }
        }

        cout << res << "\n";
    }

    return 0;
}