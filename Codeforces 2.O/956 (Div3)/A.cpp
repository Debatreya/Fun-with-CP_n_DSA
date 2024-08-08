#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a, b, c;
    cin>>a>>b>>c;
    int minDist = INT_MAX;
    for(int i = 0; i<=10; i++){
        int dist = abs(i-a) + abs(i-b) + abs(i-c);
        minDist = min(minDist, dist);
    }
    cout<<minDist<<endl;
}
int main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}