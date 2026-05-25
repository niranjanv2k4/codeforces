#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;

        if(n % 2 == 1 || n < 4)
            cout << -1 << "\n";
        else{
            long long min_val = n < 6 ? n/4 : n/6 + (n % 6 != 0);
            long long max_val = n/4;
            
            cout << min_val << " " << max_val << "\n";
        }
    }

    return 0;
}