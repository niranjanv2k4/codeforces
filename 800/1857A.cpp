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

        int tot = accumulate(arr.begin(), arr.end(), 0);
        cout << (tot % 2 == 0?"YES\n":"NO\n");

    }

    return 0;
}