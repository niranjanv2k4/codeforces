#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        vector<long long> arr(n*k);
        for(int i = 0; i<n*k; i++){
            cin >> arr[i];
        }

        int size = n - (n-1)/2;

        long long res = 0;
        for(int i = n*k-size; k--; i-= size){
            res += arr[i];
        }

        cout << res << "\n";
    }

    return 0;
}