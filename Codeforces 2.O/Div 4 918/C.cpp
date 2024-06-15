#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        sum+=x;
    }
    long double sqrtx = sqrt(static_cast<long double>(sum));
    if(floor(sqrtx) == sqrtx){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}