#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;

        if(b > a)
            swap(a, b);

        long long res = a - b;
        long long op = res == 0 ? 0 : min(b % res, res - b % res);

        cout << res << " " << op << "\n";
        
    }

    return 0;
}