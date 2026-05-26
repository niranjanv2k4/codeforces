#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        priority_queue<int> max_el;
        priority_queue<int, vector<int>, greater<int>> min_el;
        for(int i = 0; i<n; i++){
            cin >> arr[i];
            max_el.push(arr[i]);
            min_el.push(arr[i]);
        }

        int min_idx = 0;
        int max_idx = n-1;
        while(!min_el.empty() && !max_el.empty()){
            int s1 = min_el.size(), s2 = max_el.size();
            while(!min_el.empty() && min_el.top() == arr[min_idx]){
                min_idx++;
                min_el.pop();
            }
            if(min_idx == n)break;

            while(!max_el.empty() && max_el.top() == arr[min_idx]){
                min_idx++;
                max_el.pop();
            }
            if(min_idx == n)break;

            while(!max_el.empty() && arr[max_idx] == max_el.top()){
                max_idx--;
                max_el.pop();
            }
            if(max_idx == -1)break;

            while(!min_el.empty() && arr[max_idx] == min_el.top()){
                max_idx--;
                min_el.pop();
            }

            if(max_idx == -1)break;
            if(max_el.size() == s2 && min_el.size() == s1){
                break;
            }
        }

        if(min_idx >= max_idx)
            cout<<-1<<"\n";
        else
            cout<<min_idx + 1<<" "<<max_idx + 1<<endl;
    }

    return 0;
}