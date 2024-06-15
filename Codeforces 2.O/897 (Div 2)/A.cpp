#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<pair<int, int>> a;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.push_back({x,i});
    }
    sort(a.begin(), a.end());
    vector<int> ans(n);
    for(auto p : a){
        ans[p.second] = (n--);
    }
    for(int i : ans){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}