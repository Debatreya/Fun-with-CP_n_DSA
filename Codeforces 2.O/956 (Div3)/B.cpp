#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> a(n, vector<int>(m));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            int max_neighbour = 0;
            if(i>0){
                max_neighbour = max(max_neighbour, a[i-1][j]);
            }
            if(j>0){
                max_neighbour = max(max_neighbour, a[i][j-1]);
            }
            if(i<n-1){
                max_neighbour = max(max_neighbour, a[i+1][j]);
            }
            if(j<m-1){
                max_neighbour = max(max_neighbour, a[i][j+1]);
            }
            if(max_neighbour>=a[i][j]){
                continue;
            }
            a[i][j] = max_neighbour;
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}