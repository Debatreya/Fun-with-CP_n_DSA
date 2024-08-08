#include<bits/stdc++.h>

using namespace std;

string createPalindrome(const string& half, bool oddLength) {
    string pal = half;
    if (oddLength) {
        pal.pop_back();
    }
    reverse(pal.begin(), pal.end());
    return half + pal;
}

unsigned long long findNthPalindrome(unsigned long long N) {
    vector<string> palindromes;
    unsigned long long currentN = 0;
    int length = 1;
    
    while (currentN < N) {
        unsigned long long start = pow(10, (length - 1) / 2);
        unsigned long long end = pow(10, (length + 1) / 2);
        
        for (unsigned long long i = start; i < end; ++i) {
            string half = to_string(i);
            palindromes.push_back(createPalindrome(half, length % 2 != 0));
            ++currentN;
            if (currentN == N) {
                return stoull(palindromes.back());
            }
        }
        ++length;
    }
    return 0; // should never reach here if input is valid
}

int main() {
    unsigned long long N;
    cin >> N;
    
    cout << findNthPalindrome(N) << endl;
    
    return 0;
}
