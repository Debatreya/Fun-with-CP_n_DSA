#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    vector<int> start(n);
    vector<int> end(n);
    vector<vector<int>> mod;
    for (int i = 0; i < n; i++)
    {
        cin>>start[i];
    }
    for(int i = 0; i<n; i++){
        cin>>end[i];
    }
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '|'){
            vector<int> v(3, 0);
            v[0] = i+1;
            mod.push_back(v);
        }
    }
    for (int i = 0; i < mod.size()-1; i++)
    {
        mod[i][1] = mod[i+1][0];
        mod[i][2] = mod[i][1] - mod[i][0] - 1;
    }
    mod.pop_back();
    int t = mod.size();
    for(int i =0; i<t; i++){
        for(int j = 0; j<3; j++){
            cout<<mod[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0 ; i<n; i++){
        int x = start[i];
        int y = end[i];
        for(int i = 0; i<t; i++){
            if(x <= mod[i][0]){
                x = i;
                break;
            }
        }
        
        for(int i = n-1; i>=0; i--){
            if(y >= mod[i][1]){
                y = i;
                break;
            }
            if (i==0)
            {
                y=-1;
            }
            
        }
        cout<<x<<y<<endl;
        int sum  = 0;
        for(int i = x; i<=y; i++){
            sum+=mod[i][2];
        }
        cout<<sum<<" ";
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