#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, arr;
        cin >> n;
        for(int i = 0; i<n; i++)
            cin >> arr;
        
        if( n % 2 == 0 ){
            cout << 2 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n << endl;
        }else{
            cout << 4 << endl;
            cout << 1 << " " << n - 1 << endl;
            cout << 1 << " " << n - 1 << endl;
            cout << 2 << " " << n << endl;
            cout << 2 << " " << n << endl;
        }

    }

    return 0;
}