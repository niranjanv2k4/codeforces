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
            
        bool flag = false;

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(gcd(arr[i], arr[j]) <= 2){
                    flag = true;
                    break;
                }
            }
        }

        cout << (flag?"Yes\n":"No\n");

    }

    return 0;
}