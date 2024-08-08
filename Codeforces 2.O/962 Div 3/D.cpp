// TIME LIMIT

#include<bits/stdc++.h>
using namespace std;

void solve() {

    int n, x;
    cin >> n >> x;

    long long count = 0;
    
    for (int a = 1; a <= x; ++a) {
        for (int b = 1; b <= x - a; ++b) {
            // Binary search to find the maximum c
            int left = 1, right = x - a - b;
            int maxC = 0;
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (a * b + a * mid + b * mid <= n && a + b + mid <= x) {
                    maxC = mid;
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
            count += maxC;
        }
    }
    
    cout<<count<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
