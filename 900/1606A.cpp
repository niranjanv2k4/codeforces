#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        int ab = 0, ba = 0;

        for(int i = 1; i<s.size(); i++){
            if(s[i] == 'a' && s[i-1] == 'b'){
                ba++;
            }else if(s[i-1] == 'a' && s[i] == 'b')
                ab++;
        }

        if(ab != ba){
            if(ab > ba){
                if(s[0] == 'a')
                    s[0] = 'b';
                else
                    s[s.size() - 1] = 'a';
            }else{
                if(s[0] == 'b')
                    s[0] = 'a';
                else
                    s[s.size() - 1] = 'b';
            }
        }

        cout << s << endl;
    }

    return 0;
}