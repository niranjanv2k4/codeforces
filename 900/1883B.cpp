#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        string s;
        cin >> n >> k >> s;

        vector<int> freq(26, 0);
        vector<int> odd, even;
        for(char ch : s)
            freq[ch-'a']++;
        
        for(int num : freq){
            if(num % 2 == 0) even.push_back(num);
            else odd.push_back(num);
        }

        int even_sum = accumulate(even.begin(), even.end(), 0);
        
        string res = "NO\n";
        if(even_sum >= n - k){
            res = "YES\n";
        }else{
            int target = n - k - even_sum;
            sort(odd.begin(), odd.end(), greater<int>());
            for(int i = 0; i<odd.size(); i++){
                if(odd[i] >= target){
                    target = 0;
                    break;
                }else{
                    target -= (odd[i] - 1);
                    odd[i] = 1;
                }
            }

            res = target > 1 ? "NO\n" : "YES\n";
        }



        cout << res;
    }

    return 0;
}