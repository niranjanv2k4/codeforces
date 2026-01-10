#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<long long>& max_steps, int k){

    int low = 0;
    int high = max_steps.size() - 1;
    
    while(low <= high){
        int mid = (low + high)/2;
        if(max_steps[mid] > k){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return low - 1;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;

        vector<long long> pref(n), max_step(n, 0);
        for(int i = 0; i<n; i++){
            long long step;
            cin >> step;
            pref[i] = step;
            if(i > 0){
                max_step[i] = max(max_step[i-1], step);
                pref[i] += pref[i-1];
            }
            else
                max_step[i] = step;
        }

        while(q--){
            int k;
            cin >> k;
            if(k == 0)
                cout<<0<<" ";
            else{
                int idx = binary_search(max_step, k);
                if(idx == -1)
                    cout<<0<<" ";
                else
                    cout<<pref[idx]<<" ";
            }
        }

        cout<<endl;


    }

    return 0;
}