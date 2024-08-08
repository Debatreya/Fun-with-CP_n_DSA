#include<bits/stdc++.h>
using namespace std;

vector<int> f(int n){
  vector<int> v;
  while(n){
    v.push_back(n%2);
    n/=2;
  }
  return v;
}

void solve(){
  int a, b;
  cin>>a>>b;
  if( a == 0 or b == 0){

  }
  vector<int> bin_a = f(a), bin_b = f(b);
  int size_a = bin_a.size(), size_b = bin_b.size();
  if(size_a<size_b){
    bin_a.resize(size_b);
  }
  else{
    bin_b.resize(size_a);
  }
  int size = bin_a.size();
  int len = 0;
  while(len<size and bin_a[len] == bin_b[len]){
    len++;
  }
  // cout<<len<<endl;
  long long int ans = pow(2, len);
  cout<<ans<<endl;
}
int main(){
  int t = 1;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}