#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i<n; i++)
            cin >> arr[i];

        int max_el = arr[0], min_el = arr[0];
        for(int i = 0; i<n; i++){
            max_el = max(max_el, arr[i]);
            min_el = min(min_el, arr[i]);
        }

        if(max_el == min_el)
            cout << "NO\n";
        else{
            cout << "YES\n";
            cout << max_el << " ";
            for(int i = 0; i<n-1; i++)
                cout << arr[i] <<" ";
            cout << "\n";
        }
    }

    return 0;
}