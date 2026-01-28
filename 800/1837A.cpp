#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;

        if(n%k == 0)
            cout << 2 << "\n" << 1 << "\n" << n-1 << "\n";
        else{
            cout << 1 << "\n" << n << "\n";
        }
    }

    return 0;
}