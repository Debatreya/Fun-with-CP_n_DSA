#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    bool flag2 = false, flag1 = false, flag0 = false;
    cin>>n;
    int sum = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum += a[i];
        if(a[i] % 3 == 1){
            flag1 = true;
        }
        if(a[i] % 3 == 2){
            flag2 = true;
        }
        if(a[i] % 3 == 0){
            flag0 = true;
        }
    }
    if(sum % 3 == 0){
        cout<<0<<endl;
        return;
    }
    if(sum % 3 == 1){
        if(flag1){
            cout<<1<<endl;
            return;
        }
        else{
            cout<<2<<endl;
            return;
        }
    }
    if(sum % 3 == 2){
        cout<<1<<endl;
        return;
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