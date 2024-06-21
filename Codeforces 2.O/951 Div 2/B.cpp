#include <bits/stdc++.h>
using namespace std;

string intToBinaryString(int num) {
    string binary = "";
    while (num > 0) {
        binary = (num % 2 == 0 ? "0" : "1") + binary;
        num /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary.empty() ? "0" : binary;
}

int findMaxConsecutiveZeros(int a, int b) {

    string aString = intToBinaryString(a);
    string bString = intToBinaryString(b);

    // cout<<aString<<" "<<bString<<" ";

    int aLen = aString.length();
    int bLen = bString.length();

    // cout<<aLen<<" "<<bLen<<" ";

    int n = min(aLen, bLen);
    int m = max(aLen, bLen);

    // cout<<m<<" "<<n<<" "<<endl;

    int maxLength = 0;
    int currentLength = 0;
    int i = 0;
    for(i = 0; i<n; i++){
      if (aString[i] == bString[i]) {
            currentLength++;
            maxLength = max(maxLength, currentLength);
        } else {
            currentLength = 0;
        }
    }
    while(i < m and m == bLen and bString[i] == '0'){
      currentLength++;
      maxLength = max(maxLength, currentLength);
      i++;
    }
    while(i < m and m == aLen and aString[i] == '0'){
      currentLength++;
      maxLength = max(maxLength, currentLength);
      i++;
    }
    // cout<<i<<" ";
  return maxLength;
}

void solve() {
  int a, b;
  cin>>a>>b;
  long long n = findMaxConsecutiveZeros(a, b);
  // cout<<n<<" ";
  long long ans = pow(2, n);
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