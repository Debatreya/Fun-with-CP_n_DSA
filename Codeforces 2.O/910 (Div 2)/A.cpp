#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    int k;
    cin>>n>>k;
    vector<int> a, b;
    for(int i=1; i<=n; i++){
        char x;
        cin>>x;
        if(x == 'A'){
            a.push_back(i);
        }else{ 
            b.push_back(i);
        }
    }
    int b_n=b.size();
    if(b_n == k){
        cout<<0<<endl;
        return;
    }
    cout<<1<<endl;
    int diff = abs(k - b_n);

    if(b_n > k){
        int idx = b_n - 1 - k;
        cout<<b[idx]<<" "<<'A'<<endl;
        return;
    }
    int idx = diff - 1;
    cout<<a[idx]<<" "<<'B'<<endl;
}
int main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
