#include<bits/stdc++.h>
using namespace std;

void solve(int n,vector<int>& a,int Q,vector<vector<int>>& queries){
    vector<int> dp(n+1,0);
    for(int i=1;i<=n;i++){
        dp[i] = dp[i-1]|a[i-1];
    }
    for(int i=0;i<Q;i++){
        int indx = queries[i][0];
        int val = queries[i][1];
        int l = indx;
        int r = n;
        int ans = -1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if((dp[mid] | dp[indx-1])>=val){
                ans = mid;
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        cout<<ans<<endl;
    }
}

void solve1(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int Q;
    cin>>Q;
    vector<vector<int>> queries(Q,vector<int>(2));
    for(int i=0;i<Q;i++){
        cin>>queries[i][0]>>queries[i][1];
    }
    solve(n,a,Q,queries);
}
int main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve1();
    }
    return 0;
}