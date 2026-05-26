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
        for(int i = n - 1; i >= 1; i--){
            if(arr[i] <= arr[i-1]){
                while (arr[i] != 0 && arr[i] <= arr[i-1]){
                    arr[i-1] /= 2;
                    res++;
                }

                if(arr[i-1] >= arr[i]){
                    res = -1;
                    break;
                }
                
            }
        }

        cout << res << "\n";
    }

    return 0;
}