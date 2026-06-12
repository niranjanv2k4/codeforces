#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    unordered_set<char> st;
    int res = 0;
    for(char el :s){
      st.insert(el);
      res += st.size();
    }
    
    cout << res << "\n";
  }
  
  return 0;
}