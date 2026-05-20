#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);

        for(int i = 0; i<n; i++)
            cin >> arr[i];

        int res = 0;
        for(int i = 0; i<n; i++){
            if(arr[i] != i+1){
                res = gcd(res, abs(i+1 - arr[i]));
            }
        }

        cout << res << "\n";
    }

    return 0;
}