#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long a, b, n;
        cin >> a >> b >> n;
        vector<long long> times(n);
        for(int i = 0; i<n; i++){
            cin >> times[i];
        }

        sort(times.begin(), times.end());

        long long res = 0, idx = 0;
        while( idx < n){
            if(b + times[idx] <= a ){
                b = b + times[idx];
                idx++;
            }else if(b == 1){
                b = min(b + times[idx], a);
                idx++;
            }
            res += (b-1);
            b = 1;
        }

        cout << res + 1 << "\n";
    }

    return 0;
}