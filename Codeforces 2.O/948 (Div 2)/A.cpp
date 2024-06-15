#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    cin>>n>>m;
    if(n < m){
        cout<<"NO\n";
        return;
    }
    if((n-m)%2 == 0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
int main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}