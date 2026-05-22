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

        if(arr[0] == 1){
            arr[0] = 2;
        }

        for(int i = 0; i<n-1; i++){
            if(arr[i+1]==1)
                arr[i+1] = 2;
            if(arr[i+1] % arr[i] == 0){
                arr[i+1]++;
            }
        }

        for(int el : arr)
            cout << el <<" ";
        cout << endl;
    }

    return 0;
}