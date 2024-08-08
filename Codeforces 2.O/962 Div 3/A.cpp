#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int x = n >= 4 ? n/4 : 0;
    n = n%4;
    int y = n >= 2 ? n/2 : 0;
    cout<<x+y<<endl;
}
int main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}