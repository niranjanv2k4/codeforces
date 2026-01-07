#include <bits/stdc++.h>
using namespace std;

struct Cmp{
    bool operator()(const vector<int>& a, const vector<int>& b){
        return a[0] > b[0];
    }
};

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<int>> ski(n, vector<int>(2)), movie(n, vector<int>(2)), board(n, vector<int>(2));
        for(int i = 0; i<n; i++){
            cin >> ski[i][0];
            ski[i][1] = i;
        }
        for(int i = 0; i<n; i++){
            cin >> movie[i][0];
            movie[i][1] = i;
        }
        for(int i = 0; i<n; i++){
            cin >> board[i][0];
            board[i][1] = i;
        }
        sort(ski.begin(), ski.end(), Cmp());
        sort(movie.begin(), movie.end(), Cmp());
        sort(board.begin(), board.end(), Cmp());
        
        int res = 0;
        for(int i = 0; i<3; i++){
            for(int j = 0; j<3; j++){
                if(ski[i][1]==movie[j][1])continue;
                for(int k = 0; k<3; k++){
                    if(ski[i][1]==board[k][1] || movie[j][1]==board[k][1])continue;
                    res = max(ski[i][0] + movie[j][0] + board[k][0], res);
                }
            }
        }
        cout<<res<<endl;
        
    }
}