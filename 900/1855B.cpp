#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;

        int res = 0;
        if(n%2 == 0){
            for(long long i = 1; i<=n; i++){
                if(n%i==0){
                   res++;
                }else
                    break;

            }

        }else
            res = 1;

        cout << res << "\n";
    }

    return 0;
}