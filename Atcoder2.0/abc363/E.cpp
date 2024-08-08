#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
typedef pair<int, int> pi;
typedef vector<vector<int>> matrix;
typedef vector<int> vi;

void solve(){
    int row, col, y;
    cin >> row >> col >> y;

    vector<vector<int>> arr(row, vector<int>(col, 0));
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    matrix isSunk(row, vi(col, 1)); // 1 means not sunk, 0 means sunk
    unordered_map<int, vector<pi>> mp;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            mp[arr[i][j]].push_back({i, j});
        }
    }

    int initialArea = row * col;
    int totalSunk = 0;

    for(int i = 1; i <= y; i++){
        int countSunk = 0;
        queue<pi> q;

        for(auto p : mp[i]){
            int x = p.first;
            int y = p.second;
            if(isSunk[x][y] == 0){
                continue;
            }

            // Check if it is on the edge or adjacent to already sunk section
            if((x > 0 && isSunk[x-1][y] == 0) || (x < row-1 && isSunk[x+1][y] == 0) || 
               (y > 0 && isSunk[x][y-1] == 0) || (y < col-1 && isSunk[x][y+1] == 0) ||
               x == 0 || x == row-1 || y == 0 || y == col-1){
                q.push({x, y});
                isSunk[x][y] = 0;
                countSunk++;
            }
        }

        while(!q.empty()){
            pi curr = q.front();
            q.pop();
            int x = curr.first;
            int y = curr.second;

            vector<pi> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
            for(auto d : directions){
                int nx = x + d.first;
                int ny = y + d.second;
                if(nx >= 0 && nx < row && ny >= 0 && ny < col && isSunk[nx][ny] == 1 && arr[nx][ny] <= i){
                    q.push({nx, ny});
                    isSunk[nx][ny] = 0;
                    countSunk++;
                }
            }
        }

        totalSunk += countSunk;
        cout << initialArea - totalSunk << endl;
    }
}

int main(){
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
