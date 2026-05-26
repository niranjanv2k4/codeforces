#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, x, y;
        cin >> n >> x >> y;

        int cx = n / x;
        int cy = n / y;
        int cxy = n / lcm(x, y);

        long long pos = cx - cxy; 
        long long neg = cy - cxy; 

        long long add = (n * (n + 1) / 2) - ((n - pos) * (n - pos + 1) / 2);
        long long sub = (neg * (neg + 1) / 2);

        cout << add - sub << endl;
    }

    return 0;   
}