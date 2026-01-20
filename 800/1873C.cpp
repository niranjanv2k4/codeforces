#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        vector<string> arr(10);
        for(int i = 0; i != 10; i++){
            cin >> arr[i];
        }

        int res = 0, curr = 1;
        int top = 0, bottom = 9, left = 0, right = 9;
        
        while (top <= bottom && left <= right) {
            for (int j = left; j <= right; j++){
                if(arr[top][j] == 'X'){
                    res += curr;
                }
            }
            top++;

            for (int i = top; i <= bottom; i++){
                if(arr[i][right] == 'X'){
                    res += curr;
                }
            }
            right--;

            if (top <= bottom) {
                for (int j = right; j >= left; j--){
                    if(arr[bottom][j] == 'X'){
                        res += curr;
                    }
                }
                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; i--){
                    if(arr[i][left] == 'X'){
                        res += curr;
                    }
                }
                left++;
            }
            curr++;
        }

        cout << res << "\n";
    }

    return 0;
}