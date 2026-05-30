#include <bits/stdc++.h>
using namespace std;

long long ap_sum(long long start, long long n) {
    if (start > n) return 0;

    long long last = start + ((n - start) / 4) * 4;
    long long cnt = (last - start) / 4 + 1;

    return cnt * ((start + last) / 2);
}

int main() {
    int t;
    cin >> t;
    while(t--){
        long long x, n;
        cin >> x >> n;

        long long sum0 = ap_sum(0, n);
        long long sum1 = ap_sum(1, n);
        long long sum2 = ap_sum(2, n);
        long long sum3 = ap_sum(3, n);

        long long res = (sum2 +  sum3) - (sum0 + sum1);
        if(x%2)
            res = -res;

        cout << x + res << "\n";
    }

    return 0;
}