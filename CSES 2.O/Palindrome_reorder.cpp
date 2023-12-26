#include<bits/stdc++.h>
using namespace std;
void solve(){
    string str;
    cin>>str;
    vector<int> alpha(26, 0);
    int odd_count = 0, idx;
    for(int ch : str){
        ch-=65;
        alpha[ch]++;
    }
    for(int i = 0; i<26; i++){
        if(alpha[i]>0 and alpha[i]%2 != 0){
            odd_count++;
            idx = i;
        }
    }
    // for(int i=0; i<26; i++){
    //     cout<<char(65+i)<<" -> "<<alpha[i]<<endl;
    // }
    if(odd_count>1){
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    else{
        char ans[str.length()];
        int i = 0, j = str.length()-1;
        int k = 0;
        while(i<j){
            if(alpha[k]>1){
                for(int count = 0; count<alpha[k]/2; count++){
                ans[i+count] = char(65+k);
                ans[j-count] = char(65+k);
                }
                i+=alpha[k]/2;
                j-=alpha[k]/2;
            }
            k++;
        }
        if(i==j){
            ans[i] = char(65+idx);
        }
        for (int i = 0; i < str.length(); i++)
        {
            cout<<ans[i];
        }
        cout<<endl;
    }
       
}
int main(){
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}