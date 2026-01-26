#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);

        for(int i  = 0; i<n; i++){
            cin >> arr[i];
        }

        int res = INT_MAX;
        for(int i = 1; i<n; i++){
            res = min(res, arr[i] - arr[i-1]);
        }
        
        res = res < 0 ? 0:res/2 + 1;
        cout<<res<<"\n";
        
    }

    return 0;
}