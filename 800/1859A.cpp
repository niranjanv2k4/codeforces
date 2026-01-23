#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }

        int min_el = *min_element(arr.begin(), arr.end());
        vector<int> b, c;
        for(int el : arr){
            if(el == min_el)
                b.push_back(el);
            else
                c.push_back(el);
        }

        if(c.size() == 0){
            cout << -1 << endl;
        }else{
            cout << b.size() << " " << c.size() << endl;
            for(int el : b)
                cout << el <<" ";
            cout<<endl;
            for(int el : c)
                cout << el <<" ";
            cout<<endl;
        }

    }

    return 0;
}
