#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(m, vector<int>(n));
    for(int j = 0; j<n; j++){
      for(int i = 0; i<m; i++){
        cin >> arr[i][j];
      }
    }
    
    for(int i = 0; i<m; i++){
      sort(arr[i].begin(), arr[i].end());
    }
    
    long long res = 0;
    for(int i = 0; i<m; i++){
      for(int j = 0; j<n; j++){
        res -= 1LL*arr[i][j]*(n-j-1);
        res += 1LL*arr[i][j]*j;
      }
    }
    
    cout<<res<<"\n";
  }
  return 0;
}

    
    