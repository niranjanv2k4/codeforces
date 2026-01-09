#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        map<int, int> mp;
        while(n--){
            int temp;
            cin >> temp;
            mp[temp]++;
        }

        int res = 0;
        for(auto& [el, freq] : mp){
            int next = el + 1;
            if(freq > 0){
                res += freq;
                while(mp.find(next) != mp.end() && mp[next] > 0){
                    freq = min(freq, mp[next]);
                    mp[next] = max(0, mp[next] - freq);
                    next++;
                }
                freq = 0;
            }
        }
        
        cout<<res<<endl;

    }

    return 0;
}