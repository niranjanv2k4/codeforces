#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        a += c % 2;

        cout << (a > b?"First\n":"Second\n");
    }

    return 0;
}