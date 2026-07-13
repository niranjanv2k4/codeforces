#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while (t--){
		int n;
		string s;
		cin >> n >> s;

		long long res = 0;

		vector<bool> isRemoved(n + 1, false);

		for (int i = 1; i <= n; i++){
			for (int j = i; j <= n; j += i){
				if (s[j - 1] == '1')
					break;

				if (!isRemoved[j]){
					isRemoved[j] = true;
					res += i;
				}
			}
		}

		cout << res << "\n";
	}

	return 0;
}

