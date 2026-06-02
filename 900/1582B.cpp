#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        bool flag = false;
        long long one = 0, zero = 0, temp;
        for(int i = 0; i<n; i++){
            cin >> temp;
            one += temp == 1;
            zero += temp == 0;
        }

        long long res = one * pow(2, zero);

        cout << res << "\n";

            
    }

    return 0;
}