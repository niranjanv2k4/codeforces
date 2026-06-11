#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int op = 0;
        while(n > 1){
            if(n % 6 == 0){
                n /= 6;
            }else if(n % 6 == 3){
                n *= 2;
            }else{
                break;
            }
            op++;
        }

        cout << (n == 1 ? op : -1) << "\n";
    }

    return 0;
}