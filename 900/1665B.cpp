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

        unordered_map<int, int> mp;
        int max_val = 0;
        for(int el : arr){
            mp[el]++;
            max_val = max(max_val, mp[el]);
        }

        int size = n - max_val;
        int res = size;

        while(size > 0){
            size -= max_val;
            max_val *= 2;
            res++;
        }

        cout << res << "\n";
    }

    return 0;
}