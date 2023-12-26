#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    cout<<"Enter n and m "<<endl;
    cin>>n>>m;
    cout<<"Enter values"<<endl;
    vector<vector<int>> matrix(n, vector<int> (m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>matrix[i][j];
        }
        
    }
    cout<<"Ans is ";
    vector<int> ans;
    int n = matrix.size();
    if (n == 0) {
        // return ans; // Handle empty matrix
        cout<<0;
    }
    int m = matrix[0].size();
    int l = 0, t = 0, b = n, r = m;

    while (l < r && t < b) {
        for (int j = l; j < r; j++) {
            ans.push_back(matrix[t][j]);
        }
        t++;

        for (int i = t; i < b; i++) {
            ans.push_back(matrix[i][r - 1]);
        }
        r--;

        if (t < b) { // Check if there's still a row to process
            for (int j = r - 1; j >= l; j--) {
                ans.push_back(matrix[b - 1][j]);
            }
            b--;
        }

        if (l < r) { // Check if there's still a column to process
            for (int i = b - 1; i >= t; i--) {
                ans.push_back(matrix[i][l]);
            }
            l++;
        }
    }

    // return ans;
    for(int i: ans){
        cout<<i<<" ";
    }
}
int main(){
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}