#include <bits/stdc++.h>
using namespace std;

int main(){
	 int t;
	 cin >> t;
	 
	 while(t--){
	 	int n;
	 	cin >> n;
	 	vector<int> arr(n);
	 	
	 	for(int i = 0; i<n; i++){
	 		cin >> arr[i];
	 	}
	 	
	 	int tot = 0;
	 	for(int el : arr)
	 		tot ^= el;
	 	
	 	if(n%2 == 0){
	 		tot = tot == 0?0:-1;
	 	}
	 	
	 	cout << tot <<"\n";
	 }
	 
	 return 0;
}