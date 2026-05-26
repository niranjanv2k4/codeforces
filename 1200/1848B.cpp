#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    vector<vector<int>> pos(k + 1);
    for (int i = 0; i < k + 1; i++) {
        pos[i].push_back(0);
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        pos[c[i]].push_back(i + 1);
    }
    for (int i = 1; i <= k; i++) {
        pos[i].push_back(n + 1);
    }

    int min_max_jump = n;

    for (int i = 1; i <= k; i++) {
        if (pos[i].size() == 2) continue;

        vector<int> gaps;
        for (int j = 1; j < pos[i].size(); j++) {
            gaps.push_back(pos[i][j] - pos[i][j - 1] - 1);
        }
        sort(gaps.rbegin(), gaps.rend());

        int current_max = max(gaps[0] / 2, gaps[1]);
        min_max_jump = min(min_max_jump, current_max);
    }

    cout << min_max_jump << endl;
}
return 0;
}