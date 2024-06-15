#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n, -1);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        a[x-1]++;
    }
    int ans = 0;
    for(int i = 0; i<n; i++){
        if(a[i] > 0){
            ans++;
        }
    }
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