#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a, b;
    cin >> a >> b;
    int n = a.length(), m = b.length();
    int ans = n + m;
    int x = 0;
    for(int i = 0; i<m; i++){
        int ptr = i;
        for(int i = 0; i<n; i++){
            if(ptr < m && a[i] == b[ptr]){
                ptr++;
            }
        }
        x = max(x, ptr - i);
    }
    cout << n + m - x << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
