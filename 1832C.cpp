#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n, -1);

        int idx = 0;
        for(int i = 0; i<n; i++){
            int temp;
            cin >> temp;
            if(idx == 0 || temp != arr[idx-1])
                arr[idx++] = temp;
        }

        int res = 1;
        if(idx > 1){
            res = 2;
            for(int i = 1; i<idx-1; i++){
                if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
                    res++;
                }
                if(arr[i] < arr[i-1] && arr[i] < arr[i+1]){
                    res++;
                }
            }
        }

        cout<<res<<endl;
    }

    return 0;
}