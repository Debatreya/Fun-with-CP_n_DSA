#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<char> a = {'0', '2', '4', '6', '8'};
string f(ll n){
    string ans = "";
    if(n<0){
        return "";
    }
    if(n < 5){
        ans += a[n];
        return ans;
    }
    ans += f(n/5);
    ans += f(n%5);
    return ans;
}
void solve(){
    ll n;
    cin>>n;
    cout<<f(n-1);
}
int main(){
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}