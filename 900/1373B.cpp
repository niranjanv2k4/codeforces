#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        int one = 0, zero = 0;
        for(char ch : s){
            if(ch == '1') 
                one++;
            else 
                zero++;
        }

        bool flag = false;
        while(one-- && zero--)
            flag = !flag;
        

        cout << (flag ? "DA\n" : "NET\n");
    }

    return 0;
}