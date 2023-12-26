#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int arr[26] = {0};
    for(char ch : s){
        arr[ch - 'A']++;
    }
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if(arr[i] >= (i+1)){
            count++;
        }
    }
    cout<<count;
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