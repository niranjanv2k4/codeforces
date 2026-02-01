#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;

        bool flag = (n % gcd(2, k) == 0);

        cout << (flag?"YES\n":"NO\n");
    }

    return 0;
}