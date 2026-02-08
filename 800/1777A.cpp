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
        
        int res = 0, i = 0;

        while(i < n){
            int curr = arr[i];
            int len = 0;
            while(i < n && (curr & 1) == (arr[i] & 1)){
                len++;
                i++;
            }

            res += (len - 1);
        }

        cout << res << "\n";
    }

    return 0;
}