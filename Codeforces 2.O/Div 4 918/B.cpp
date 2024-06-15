#include<bits/stdc++.h>
using namespace std;
void solve(){
    int arr[3] = {0};
    for(int i = 0; i<9; i++){
        char x;
        cin>>x;
        if(x != '?')
            arr[x-'A']++;
    }
    for(int i = 0; i<3; i++){
        if(arr[i] == 2){
            cout<<char(i+65)<<endl;
        }
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