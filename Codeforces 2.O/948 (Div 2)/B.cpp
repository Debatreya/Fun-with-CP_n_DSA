#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x;
    cin>>x;
    vector<int> ans;
    while(x){
        int rem = x%2;
        ans.push_back(rem);
        x /= 2;
    }
    int n = ans.size();
    for(int i = 0; i <= n; i++){
        int j = i;
        while(i<n && ans[i] == 1){
            i++;
        }
        if(i-j > 1){
            for(int k = j; k <= i; k++){
                if(k == j){
                    ans[k] = -1;
                }
                else if(k == i){
                    if(i == n)
                        ans.push_back(1);
                    else
                        ans[k] = 1;
                }
                else
                    ans[k] = 0;
            }
            if(i == n) break;
            i--;
        }
    }
    n = ans.size();
    cout<<n<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
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