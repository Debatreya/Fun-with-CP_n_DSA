#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    cin>>n>>m;
    string s, c;
    set<int> st;
    cin>>s;
    for(int i = 0; i<m; i++){
        int x;
        cin>>x;
        st.insert(x);
    }
    cin>>c;
    sort(c.begin(), c.end());
    int i = 0;
    for(auto x: st){
        s[x-1] = c[i];
        i++;
    }
    cout<<s<<endl;
}
int main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}