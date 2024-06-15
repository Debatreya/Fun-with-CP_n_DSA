#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int sumA = 0, sumB = 0;
    while(n--){
        int x, y;
        cin>>x>>y;
        sumA+=x;
        sumB+=y;
    }
    if(sumA == sumB)
        cout<<"Draw"<<endl;
    else
        sumA > sumB ? cout<<"Takahashi"<<endl : cout<<"Aoki"<<endl;
}
int main(){
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}