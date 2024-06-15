#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a, b, l;
    int powA = 1, powB = 1;
    cin>>a>>b>>l;
    if(l%a != 0 and l%b != 0){
        cout<<1<<endl;
        return;
    }
    int copyl = l;
    while(l%a == 0){
        l /= a;
        powA++;
    }
    l = copyl;
    while(l%b == 0){
        l /= b;
        powB++;
    }
    if(pow(a, powA-1)*pow(b, powB-1) == copyl){
        cout<<powA*powB<<endl;
        return;
    }
    int x = powA-1;
    int y = copyl/pow(a, x);
    int count = 1;
    while(y%b != 0){
        y /= b;
        count++;
    }
    int ans = powA * count;
    int prev = count;
    x = powB - 1;
    y = copyl/pow(b, x);
    count = 1;
    while(y%a != 0){
        y /= a;
        count++;
    }
    ans += (powB-prev) * count;
    cout<<ans<<endl;
}
int main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}