#include <bits/stdc++.h>
using namespace std;

unordered_set<string> st;

bool hasKLengthPalindrome(const string& s, int k) {
    for (int i = 0; i <= s.size() - k; i++) {
        string temp = s.substr(i, k);
        string temp1 = temp;
        reverse(temp1.begin(), temp1.end());
        if (temp == temp1) {
            return true;
        }
    }
    return false;
}

void generatePermutations(string &s, int l, int r, int k, int &count) {
    if (l == r) {
        if (!hasKLengthPalindrome(s, k)) {
            count++;
        }
        return;
    }
    unordered_set<char> used;
    for (int i = l; i <= r; i++) {
        if (used.find(s[i]) != used.end()) {
            continue;
        }
        used.insert(s[i]);
        swap(s[l], s[i]);
        generatePermutations(s, l + 1, r, k, count);
        swap(s[l], s[i]);
    }
}

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    int count = 0;
    generatePermutations(s, 0, n - 1, k, count);
    
    cout << count << endl;
}

int main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
