#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin>>n>>k;
    int m = n/k;
    vector<vector<int>> a(n, vector<int>(n, 0));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            char ch;
            cin>>ch; //(0 or 1)
            a[i][j] = ch - '0';
        }
    }
    for(int i = 0; i<m; i++){
        for(int j = 0; j<m; j++){
            cout<<a[k*i][k*j];
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