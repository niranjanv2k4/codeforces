#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        int arr_size = (n*(n-1))/2;
        vector<int> arr(arr_size);
        for(int i = 0; i<arr_size; i++)
            cin >> arr[i];
        
        sort(arr.begin(), arr.end());

        int idx = 0;

        while(idx < arr_size){
            n--;
            cout << arr[idx] <<" ";
            idx += n;
        }
        cout << 1000000000 <<endl;
    }

    return 0;
}