#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x, y;
    cin>>x>>y;
    int count = (y+1)/2;
    int gaps = (y%2 == 0 ? 7*count : 7*(count-1)+11);
    x-=gaps;
    if(x>0){
        count += ((x%15 == 0 ? x/15 : x/15 + 1));
    }
    cout<<count<<endl;
}
int main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}