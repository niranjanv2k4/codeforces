#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    string s;
    cin >> n >> s;
    
    int count = 0, res = 0;
    bool flag = false;
    for(int i = 0; i<n; i++){
      if(s[i] == '.'){
        count++;
        if(count == 3){
            flag = true;
            break;
        }
      }else
        count = 0;
    }
    if(flag)
        res = 2;
    else
        for(int el:s)
            res += (el == '.');
        
    cout << res << "\n";
    
  }
  return 0;
}