#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    
    if(n == 1){
        cout<<1;
        return;
    }
    int leftstart = 0, leftend = n-1, rightstart = n-1, rightend = 0;
    for(int i = 1; i<n; i++){
        
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