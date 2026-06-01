#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;

        int res = 19;
        string s = to_string(n);

        for(int i = s.size() - 1; i >= 0; i--){

            int j = i - 1, curr = s.size() - 1 - i;

            if(s[i] == '0'){

                while(j >= 0 && s[j] != '0' && s[j] != '5'){
                    curr++;
                    j--;
                }

                res = min(res, curr);
            }
            if(s[i] == '5'){

                while(j >= 0 && s[j] != '7' && s[j] != '2'){
                    curr++;
                    j--;
                }

                res = min(res, curr);
            }
            
        }

        cout << res << "\n";
    }

    return 0;
}