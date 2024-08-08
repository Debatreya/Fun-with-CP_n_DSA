#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  for(int i = 1; i<=20; i++){
    int x = 0^i;
    cout<<x<<" ";
  }
  cout<<endl;
  for(int i = 1; i<=20; i++){
    int x = n^i;
    cout<<x<<" ";
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