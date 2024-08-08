#include<bits/stdc++.h>
using namespace std;
void solve(){
    int R;
    cin>>R;
    if(R < 100){
        cout<<100 - R<<endl;
        return;
    }
    else if(R < 200){
        cout<<200 - R<<endl;
        return;
    }
    cout<<300 - R<<endl;
}
int main(){
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}