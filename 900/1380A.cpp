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

        int start = 0, end = n - 1;
        
        while(start < end){
            if(arr[start] == n){
                start++;
            }else if(arr[end] == n){
                end--;
            }else{
                break;
            }
            n--;
        }

        if(start < end){

            int i = -1, j = -1, k = -1;
            for(int idx = start; idx <= end; idx++){
                if(arr[idx] < n && j == -1){
                    i = idx;
                }else if(arr[idx] == n){
                    j = idx;
                }else if(arr[idx] < n && j != -1){
                    k = idx;
                    break;
                }
            }
            
            cout << "YES\n" << i + 1 << " " << j + 1 << " " << k + 1 << "\n";

        }else{
            cout << "NO\n";
        }
    }
    return 0;
}