// Given an array A of size N
// A posiutive int K

// Let B be a subsequence of A whose elements are b1, b2 of size m (m>1).
// B also satisfies the following conditions:
// (b1+b2)%K == ..... = (bi-1 + bi)%K == (bi + bi+1)%K == .... = (bm-1 + bm)%K;
// Subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.



// Complete the function int maxSequence(int N, vector<int> A, int K) which takes the array A and an integer K as input and returns an integer.

// Constraints
// 1 <= N <= 10^5


#include <bits/stdc++.h>
using namespace std;

int maxSequence(int N, vector<int> A, int K) {
    unordered_map<int, int> dp; // Memoization table to store lengths of subsequences
    int maxLength = 0;
    int prefixSum = 0;

    for (int i = 0; i < N; ++i) {
        prefixSum = (prefixSum + A[i]) % K;
        
        if (prefixSum == 0) {
            // If the prefix sum itself is divisible by K, update maxLength
            maxLength = max(maxLength, i + 1);
        } else {
            if (dp.find(prefixSum) != dp.end()) {
                // If a subsequence ending at this index with the same remainder exists
                int length = i - dp[prefixSum];
                maxLength = max(maxLength, length);
            } else {
                // If no subsequence with this remainder is found, add it to dp
                dp[prefixSum] = i;
            }
        }
    }

    return maxLength;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        int K;
        cin >> K;
        cout << maxSequence(N, A, K) << endl;
    }
    return 0;
}