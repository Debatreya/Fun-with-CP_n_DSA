#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c){
    if(c == 'a' || c == 'e'){
        return true;
    }
    return false;
}
void solve(){
    int n;
    cin>>n;
    vector<char> str;
    for(int i = 0; i<n; i++){
        char c;
        cin>>c;
        str.push_back(c);
    }
    int i = n-1;
    vector<string> ans;
    while(i>=0){
        if(isVowel(str[i])){
            i--;
            string s;
            s+= +str[i];
            s+=str[i+1];
            ans.push_back(s);
        }
        else{
            i-=2;
            string s;
            s+=+str[i];
            s+=str[i+1];
            s+=str[i+2];
            ans.push_back(s);
        }
        i--;
    }
    string ansStr = "";
    reverse(ans.begin(), ans.end());
    for(string x : ans){
        // cout<<x<<" ";
        ansStr += x;
        ansStr += '.';
    }
    ansStr.pop_back();
    cout<<ansStr<<endl;
}
int main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}