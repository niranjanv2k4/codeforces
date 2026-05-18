#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);

        for(int i = 0; i<n; i++)
            cin >> arr[i];
        
        sort(arr.begin(), arr.end());

        int res = 1;
        int curr = 1;
        for(int i = 1; i<n; i++){
            if(abs(arr[i] - arr[i-1]) <= k){
                curr++;
                res = max(curr, res);
            }
            else{
                curr = 1;
            }
        }

        cout << n - res << "\n";
    }

    return 0;
}