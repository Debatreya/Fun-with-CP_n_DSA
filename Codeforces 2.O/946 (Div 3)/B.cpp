#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    // Distinct Alphabets in ascending order
    set<char> decS;
    for(int i=0; i<n; i++){
        decS.insert(s[i]);
    }
    // Get corresponding vector from the set
    vector<char> decV(decS.begin(), decS.end());
    int size = decV.size();
    // Create a map to store the index of each alphabet
    map<char, int> decM;
    for(int i=0; i<size; i++){
        decM[decV[i]] = size-i-1;
    }
    // Decoding the string s
    string decodedS = "";
    for(int i=0; i<n; i++){
        decodedS += decV[decM[s[i]]];
    }
    cout<<decodedS<<endl;
}
int main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}