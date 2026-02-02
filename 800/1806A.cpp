#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if(y2 < y1)
            cout << -1;
        else if(y2 == y1){
            if(x2 <= x1)
                cout <<x1 - x2;
            else
                cout << -1;
        }else{
            int temp = y2 - y1;
            if(x2 > x1 + temp)
                cout << -1;
            else
                cout << x1 + temp - x2 + temp;
        }

        cout << endl;
            
    }

    return 0;
}