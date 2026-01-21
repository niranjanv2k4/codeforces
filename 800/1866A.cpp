#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, res = INT_MAX;
    cin >> n;
    while(n--){
        int temp;
        cin >> temp;
        if(abs(temp) < res)
            res = abs(temp);
    }

    cout << res << "\n";

    return 0;
}