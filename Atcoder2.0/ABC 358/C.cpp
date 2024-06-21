#include<bits/stdc++.h>
using namespace std;

int f(int idx, int m, vector<vector<int>> &mat, vector<int> complete, int rowCount = 0){
    if(idx<0){
        if(accumulate(complete.begin(), complete.end(), 0) == m) return rowCount;
        return INT_MAX;
    }
    int dontTake = f(idx-1, m, mat, complete, rowCount);
    for(int i = 0; i<m; i++){
        if(mat[idx][i] == 1 && complete[i] == 0){
            complete[i] = 1;
        }
    }
    int take = f(idx-1, m, mat, complete, rowCount+1);
    return min(take, dontTake);
}

void solve(){
    int n, m;
    cin >> n >> m; // Correctly reading the input values for n and m

    vector<vector<int>> mat(n, vector<int>(m + 1));
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < m; j++) {
            char ch;
            cin >> ch;
            if (ch == 'o') {
                mat[i][j] = 1;
                count++;
            } else {
                mat[i][j] = -1;
            }
        }
        mat[i][m] = count;
    }
    vector<int> complete(m, 0);
    int minShops = f(n-1, m, mat, complete);
    cout<<minShops<<endl;
}

int main(){
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}