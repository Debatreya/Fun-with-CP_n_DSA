#include <iostream>
using namespace std;

#define MOD 1000000007

int main() {
    long long n;
    cin >> n;

    long long ans = 1;
    for (int i = 0; i < n; ++i) {
        ans = (ans * 2) % MOD;
    }

    cout << ans;

    return 0;
}
