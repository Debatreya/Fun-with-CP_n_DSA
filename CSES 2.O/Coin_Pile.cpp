#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a, b;
    cin>>a>>b;
    (a+b)%3 == 0 and max(a, b) <= 2*(min(a ,b)) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
int main()
{
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}