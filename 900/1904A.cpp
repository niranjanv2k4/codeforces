#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<pair<int,int>> moves = {
        {1, 1},
        {1, -1},
        {-1, 1},
        {-1, -1}
    };

    while(t--){
        int a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;

        int res = 0;

        set<pair<int, int>> king, queen;

        for(int i = 0; i<4; i++){
            king.insert({xk + moves[i].first*b, yk + moves[i].second*a});
            king.insert({xk + moves[i].first*a, yk + moves[i].second*b});
            queen.insert({xq + moves[i].first*b, yq + moves[i].second*a});
            queen.insert({xq + moves[i].first*a, yq + moves[i].second*b});
        }

        for(auto king_pos : king){
            if(queen.count(king_pos))
                res++;
        }


        cout << res << "\n";
    }

    return 0;
}