#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ans = 0;
    while(n%2 == 0){
        n/=2;
        ans++;
    }
    cout<<ans;
}
int main(){
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}