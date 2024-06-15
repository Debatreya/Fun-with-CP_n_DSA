#include<bits/stdc++.h>
using namespace std;
int numberOfOnes(string s){
    int n = s.length();
    int count = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '1'){
            count++;
        }
    }
    return count;
}
int toMakePalindrome(string s){
    int n = s.length();
    int count = 0;
    for(int i=0; i<n/2; i++){
        if(s[i] != s[n-i-1]){
            count++;
        }
    }
    return count;
}

void solve(){
    int n;
    cin>>n;
    string s; //s -> binary string
    cin>>s;
    int e = toMakePalindrome(s);
    int o = numberOfOnes(s);
    vector<int> ans(n+1, 0);
    if(e == 0){ //if string is palindrome initially
        if(n%2 == 0){
            for(int i=0; i<=n; i++){
                if(i%2 == 0){
                    cout<<1;
                }else{
                    cout<<0;
                }
            }
            cout<<endl;
            return;
        }
        else{
            for(int i=0; i<=n; i++){
                    cout<<1;
            }
            cout<<endl;
            return;
        }
    }
    // If it was not initially a palindrome
    int start = e; //the first palindrome for
    int last = n - e; //the last palindrome for
    if(n % 2 == 0){
        for(int i=start; i<=last; i+=2){
            ans[i] = 1;
        }
    }
    else{
        for(int i=start; i<=last; i++){
            ans[i] = 1;
        }
    }
    for(int i=0; i<=n; i++){
        cout<<ans[i];
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