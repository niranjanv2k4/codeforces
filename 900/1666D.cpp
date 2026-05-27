#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s, t;
        cin >> s >> t;

        unordered_map<char, int> mp;
        for(char ch : t)
            mp[ch]++;
        
        string temp = "", res; 
        for(int i = s.size() - 1; i >= 0; i--){
            if(mp[s[i]] > 0){
                temp = s[i] + temp;
                mp[s[i]]--;
            }
        }

        int i = 0, j = 0;
        while(i < t.size() && j < temp.size()){
            if(t[i] == temp[j])
                i++;
            j++;
        }

        cout << (i == t.size() ? "YES\n" : "NO\n" );
    }

    return 0;
}