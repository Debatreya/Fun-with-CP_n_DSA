#include<bits/stdc++.h>
using namespace std;
void solve(){
    int R, G, B;
    cin>>R>>G>>B;
    string C;
    cin>>C;
    if(C == "Red"){
        cout<<min(G, B)<<endl;
    }
    else if(C == "Blue"){
        cout<<min(R, G)<<endl;
    }
    else{
        cout<<min(R, B)<<endl;
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