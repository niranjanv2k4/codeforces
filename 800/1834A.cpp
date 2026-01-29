#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int temp, count = 0;;
        for(int i = 0; i<n; i++){
            cin >> temp;
            if(temp == -1)
                count++;

        }

        int res = 0;
        if(count != 0){
            if(count > n/2){
                res += count - n/2;
                count -= (count - n/2);
            }

            if(count % 2){
                count--;
                res++;
            }
                
        }

        cout << res << "\n";

    }

    return 0;
}