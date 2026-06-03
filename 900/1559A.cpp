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

        int res = arr[0];
        int curr = arr[0];
        for(int i = 0; i<n; i++){
            curr &= arr[i];
            res = min(res, curr);
        }

        cout << res << "\n";
    }

    return 0;
}