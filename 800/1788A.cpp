#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int two = 0;
        for(int i = 0; i<n; i++){
            cin >> arr[i];
            if(arr[i] == 2)
                two++;
        }

        if(two % 2 == 1)
            cout << -1 << "\n";
        else{
            two /= 2;
            for(int i = 0; i<n; i++){
                if(arr[i] == 2)
                    two--;
                if(two == 0){
                    cout << i + 1 << "\n";
                    break;
                }
            }
        }
    }

    return 0;
}