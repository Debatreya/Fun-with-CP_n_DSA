#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin>>n>>k;
    int i = 0;
    while (k--)
    {
        cout<<++i<<" ";
    }
    for (int j = n; j > i; j--)
    {
        cout<<j<<" ";
    }
    cout<<endl;    
}
int main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}