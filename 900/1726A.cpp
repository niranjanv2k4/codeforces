#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }
        
        int res = 0;
        int min_el = arr[0], max_el = arr[n-1];
        for(int i = 0; i<n; i++){
            if(i != n-1){
                min_el = min(min_el, arr[i]);
            }
            if(i != 0){
                max_el = max(max_el, arr[i]);
            }

            if(i > 0){
                res = max(res, arr[i-1] - arr[i]);
            }
        }

        cout << max({max_el - arr[0], arr[n-1] - min_el, res}) << "\n";
    }

    return 0;
}