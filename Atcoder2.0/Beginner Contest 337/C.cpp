#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int start = 0;
    vector<int> v(n+1, 0);
    for(int i = 1; i<=n; i++){
        int x;
        cin>>x;
        if(x == -1){
            start = i;
        }else{
            v[x] = i;
        }
    }
    while(start != 0){
        cout<<start<<" ";
        start = v[start];
    }
    cout<<endl;
}
int main(){
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}