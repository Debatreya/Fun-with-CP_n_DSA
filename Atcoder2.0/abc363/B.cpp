#include<bits/stdc++.h>
using namespace std;
void solve(){
    int N, T, P;
    cin>>N>>T>>P;
    vector<int> L(N);
    for(int i = 0; i < N; i++){
        int x;
        cin>>x;
        L[i] = x;
    }
    sort(L.begin(), L.end(), greater<int>());
    int len = L[P-1];
    int days = 0;
    if(T - len > 0){
        days = T - len;
    }
    else{
        days = 0;
    }
    cout<< days <<endl;
}
int main(){
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}