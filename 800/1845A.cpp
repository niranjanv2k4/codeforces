#include <bits/stdc++.h>
using namespace std;

bool recurse(vector<int>& temp, int n, int k, int x){
    if(n <= 0)
        return n == 0;
    
    for(int i = 1; i<=k; i++){
        if(i != x){
            temp.push_back(i);
            if(recurse(temp, n-i, k, x))
                return true;
            
            temp.pop_back();
        }
    }

    return false;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k, x;
        cin >> n >> k >> x;

        vector<int> temp;
        bool res = recurse(temp, n, k, x);
        if(res){
            cout <<"YES\n" << temp.size() <<"\n";
            for(int el : temp)
                cout<<el<<" ";
            cout<<"\n";
        }else
            cout << "NO\n";
        
    }

    return 0;
}