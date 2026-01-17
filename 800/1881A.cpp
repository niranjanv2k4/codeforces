#include <bits/stdc++.h>
using namespace std;

bool check(string x, string s){
    if(s.size() > x.size())
        return false;

    for(int i = 0; i<x.size(); i++){
        int i1 = i, i2 = 0;
        while(i1 < x.size() && i2 < s.size() && s[i2] == x[i1]){
            i1++;
            i2++;
        }
        if(i2 == s.size())
            return true;
    }
    return false;

}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        int res = 0;
        while(x.find(s) == string::npos && res < 6){
            x = x + x;
            res++;
        }

        if(x.find(s) == string::npos){
            cout << -1 <<"\n";
        }else{
            cout << res <<"\n";
        }
    }

    return 0;
}