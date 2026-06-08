#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n, x;
        cin >> n >> x;
        
        vector<long long> arr(n);
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }

        long long tot = 0, max_val = 0, min_val = 0;
        
        for(long long el : arr){
            tot += el;
            max_val += (el/x);
            if(el % x)
                max_val++;
        }
        
        min_val = tot/x;
        if(tot % x)
            min_val++;
        
        cout << min_val << " " << max_val << "\n";

    }

    return 0;
}