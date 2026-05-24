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
        int i = 0;
        while(i<n){
            if(arr[i] != 0){
                while(i < n && arr[i] != 0){
                    i++;
                }
                res++;
                if(res == 2)
                    break;
            }else
                i++;
        }

        cout << res << "\n";
    }

    return 0;
}