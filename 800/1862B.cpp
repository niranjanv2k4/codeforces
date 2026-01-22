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
        
        vector<int> res;
        res.push_back(arr[0]);

        for(int i = 1; i<n; i++){
            if(arr[i] >= arr[i-1])
                res.push_back(arr[i]);
            else{
                res.push_back(arr[i]);
                res.push_back(arr[i]);
            }
        }

        cout<<res.size()<<"\n";
        for(int el : res)
            cout<< el <<" ";
        cout << endl;
    }

    return 0;
}