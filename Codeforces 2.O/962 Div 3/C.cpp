#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;

    vector<vector<int>> freqA(n + 1, vector<int>(26, 0));
    vector<vector<int>> freqB(n + 1, vector<int>(26, 0));

    for (int i = 1; i <= n; ++i) {
        freqA[i] = freqA[i - 1];
        freqB[i] = freqB[i - 1];
        freqA[i][a[i - 1] - 'a']++;
        freqB[i][b[i - 1] - 'a']++;
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        vector<int> countA(26, 0), countB(26, 0);
        for (int i = 0; i < 26; ++i) {
            countA[i] = freqA[r][i] - freqA[l - 1][i];
            countB[i] = freqB[r][i] - freqB[l - 1][i];
        }

        int operations = 0;
        for (int i = 0; i < 26; ++i) {
            operations += abs(countA[i] - countB[i]);
        }

        cout << operations / 2 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
