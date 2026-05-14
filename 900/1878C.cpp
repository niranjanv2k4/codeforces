#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n, k, x;
        cin >> n >> k >> x;

        long long tot_sum = (n*(n+1))/2;
        long long lower_lim = (k*(k+1))/2;

        long long upper_lim = tot_sum - (((n-k)*(n-k+1))/2);

        
        if( x <= upper_lim && x >= lower_lim)
            cout << "YES\n";
        else
            cout << "NO\n";
        
    }

    return 0;
}