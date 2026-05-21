#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<int> arr(n), pref(n);
        for(int i = 0; i<n; i++){
            cin >> arr[i];
            pref[i] = arr[i] + (i == 0 ? 0 : pref[i-1]);
        }

        while (q--){
            int l, r, k;
            cin >> l >> r >> k;
            l--;
            r--;

            int tot = pref[n-1];
            int l_to_r = (l == 0 ? pref[r] : pref[r] - pref[l-1]);

            int new_sum = tot - l_to_r + (r - l + 1) * k;

            cout << (new_sum % 2 ? "YES" : "NO ") << "\n";
        }
        


    }

    return 0;
}