#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int n = s.length();
    int t;
    t = s[0];
    for (int i = 1; i < n; i++)
    {
        if(s[i] < s[i-1]){
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
}
int main(){
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}