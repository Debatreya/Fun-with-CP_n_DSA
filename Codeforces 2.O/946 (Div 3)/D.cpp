#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    int N, S, W, E;
    N = S = W = E = 0;
    cin>>s;
    for(int i=0; i<n; i++){
        if(s[i] == 'N'){
            N++;
        }
        else if(s[i] == 'S'){
            S++;
        }
        else if(s[i] == 'W'){
            W++;
        }
        else{
            E++;
        }
    }
    int commonNS = min(N, S);
    int commonWE = min(W, E);
    N -= commonNS;
    S -= commonNS;
    W -= commonWE;
    E -= commonWE;

    // Check if it is possible to reach the same point
    bool notPossible = ((commonNS+commonWE) == 1 and (N+S+W+E) == 0) or ((N+S)%2 == 1 or (W+E)%2 == 1);

    
    if(notPossible){
        cout<<"NO"<<endl;
        return;
    }
    // Distribute directions between R and H (initially at same point) so that they end up at the same point
    vector<vector<int>> dirIdx(4);
    for(int i=0; i<n; i++){
        if(s[i] == 'N'){
            dirIdx[0].push_back(i);
        }
        else if(s[i] == 'S'){
            dirIdx[1].push_back(i);
        }
        else if(s[i] == 'W'){
            dirIdx[2].push_back(i);
        }
        else{
            dirIdx[3].push_back(i);
        }
    }
    vector<char> ans(n);
    while(commonNS){
        if(commonNS%2 == 0){
            ans[dirIdx[0].back()] = 'R';
            ans[dirIdx[1].back()] = 'R';
            dirIdx[0].pop_back();
            dirIdx[1].pop_back();
            commonNS--;
        }
        else{
            ans[dirIdx[0].back()] = 'H';
            ans[dirIdx[1].back()] = 'H';
            dirIdx[0].pop_back();
            dirIdx[1].pop_back();
            commonNS--;
        }
    }
    while(commonWE){
        if(commonWE%2 == 0){
            ans[dirIdx[2].back()] = 'H';
            ans[dirIdx[3].back()] = 'H';
            dirIdx[2].pop_back();
            dirIdx[3].pop_back();
            commonWE--;
        }
        else{
            ans[dirIdx[2].back()] = 'R';
            ans[dirIdx[3].back()] = 'R';
            dirIdx[2].pop_back();
            dirIdx[3].pop_back();
            commonWE--;
        }
    }
    while(N){
        ans[dirIdx[0].back()] = 'R';
        dirIdx[0].pop_back();
        N--;
        ans[dirIdx[0].back()] = 'H';
        dirIdx[0].pop_back();
        N--;
    }
    while(S){
        ans[dirIdx[1].back()] = 'R';
        dirIdx[1].pop_back();
        S--;
        ans[dirIdx[1].back()] = 'H';
        dirIdx[1].pop_back();
        S--;
    }
    while(W){
        ans[dirIdx[2].back()] = 'R';
        dirIdx[2].pop_back();
        W--;
        ans[dirIdx[2].back()] = 'H';
        dirIdx[2].pop_back();
        W--;
    }
    while(E){
        ans[dirIdx[3].back()] = 'R';
        dirIdx[3].pop_back();
        E--;
        ans[dirIdx[3].back()] = 'H';
        dirIdx[3].pop_back();
        E--;
    }

    // Convert vector<char> to string
    for(int i=0; i<n; i++){
        if(ans[i] == 'R' || ans[i] == 'H'){
            cout<<ans[i];
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