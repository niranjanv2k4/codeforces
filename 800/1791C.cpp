#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;

        int start = 0, end = n-1;
        while(start <= end && s[start] != s[end]){
            start++;
            end--;
        }

        cout << end - start + 1 << "\n"; 
    }

    return 0;
}