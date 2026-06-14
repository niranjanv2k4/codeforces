#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<vector<long long>> arr(n, vector<long long>(2));
        for(int i = 0; i<n; i++){
            cin >> arr[i][0];
            arr[i][1] = i;
        }

        sort(arr.begin(), arr.end(), [](vector<long long>& a, vector<long long>& b){
            return a[0] < b[0];
        });

        vector<long long> res(n), pref(n, 0);
        pref[0] = arr[0][0];
        for(int i = 1; i < n; i++)
            pref[i] = pref[i-1] + arr[i][0];

        int index = 0;
        long long sum = 0;

        res[arr[n-1][1]] = n - 1;
        for(int i = n - 2; i >= 0; i--){
            if(pref[i] >= arr[i+1][0])
                res[arr[i][1]] = res[arr[i+1][1]];
            else
                res[arr[i][1]] = i;
        }

        for(int el : res)
            cout << el << " ";

        cout << endl;
    }

    return 0;
}