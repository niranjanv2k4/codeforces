#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> mp;
        for(int i = 0; i<n; i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }

        if(mp.size() > 2)
            cout<<"NO\n";
        else if(mp.size() == 1)
            cout <<"YES\n";
        else{
            int c1 = 0, c2 = 0;
            for(auto& [key, value] : mp){
                if(c1 == 0)
                    c1 = value;
                else c2 = value;
            }
            if(abs(c1-c2) > 1)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
    }

    return 0;
}