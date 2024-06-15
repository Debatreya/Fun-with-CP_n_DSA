#include<bits/stdc++.h>
using namespace std;
void solve(){
    int q, n;
    cin>>q>>n;
    vector<int> a(q), b(n);
    for(int i = 0; i<q; i++){
        cin>>a[i];
    }
    for(int i = 0; i<n; i++){
        cin>>b[i];
    }
    int x = a[0]; //a is already sorted
    for(int i: b){
        if(x > i){
            cout<<i<<" ";
        }
        else{
            cout<<x-1<<" ";
        }
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