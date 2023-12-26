#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin>>n>>k;
    vector<vector<int>> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        int f;
        cin>>f;
        a[i] = {f, i};
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }

    sort(a.rbegin(), a.rend());
    sort(b.begin(), b.end());
    vector<int> ans(n);
    int idx = 0, check = 0;
    for (int i = k; i >= 0; i--)
    {
        if(a[i][0] > b[idx]){
            ans[a[i][1]] = b[idx];
            idx++;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        cout<<"YES"<<endl;
        for (auto &i:ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
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