#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int ans = max(v[1], v[0]) - 1;
  for(int i = 2; i<n; i++){
    ans = min(max(v[i], v[i-1]) - 1, ans);
  }
  cout<<ans<<endl;
}
int main() {
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}