#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, a;
    cin>>n>>a;
    int prev = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        if(prev < x){
            prev = x+a;
            cout<<prev<<endl;
        }
        else{
            prev+=a;
            cout<<prev<<endl;
        }
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