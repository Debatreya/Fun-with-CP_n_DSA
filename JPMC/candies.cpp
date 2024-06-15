// Bob has invented a machine. The machine has the power to convert coins into candies.

// Initially, on day 1, the efficiency of the machine is n, that is, a coin with value e produces n x c candies and this efficiency decreases by 1 each day. On day 2, the efficiency is (n-1). Finally, after n days, the efficiency comes down to 0. The machine cannot accept more than 1 coin in a day.

// There are m friends who want to give gifts to Bob for inventing the machine. A gift can be described with two integers d and where d is the day on which he or she receives the gift and is the value of the coin. A coin received on day i can be used on day if and only if j. The same coin cannot be used more than once.
// 
// Find the maximum possible number of candies that remain with Bob.
// 
// Input format
// 
// The first line contains two integers n and m denoting the number of days, and the number of gifts.

// COmplete the function int maximum_candies (int n, int m, vector<pair<int, int>> gifts) which takes the number of days, the number of gifts, and the vector of pairs of integers as input and returns an integer.

// Constraints
// 1 <= n <= 10^5


#include <bits/stdc++.h>
using namespace std;

bool compareGifts(vector<int>& a, vector<int>& b) {
    // Sort in descending order of gift values
    return a[1] > b[1];
}

int maximum_candies(int n, int m, vector<vector<int>>& gifts) {
    vector<vector<int>> giftsReceived(n + 1); // To store gifts received on each day

    // Sorting gifts in descending order of their values
    sort(gifts.begin(), gifts.end(), compareGifts);

    for (int i = 0; i < m; ++i) {
        int day = gifts[i][0];
        giftsReceived[day].push_back(gifts[i][1]);
    }

    int totalCandies = 0;
    vector<bool> used(m, false);

    // Assigning gifts to the latest possible day
    for (int day = n; day >= 1; --day) {
        int maxCandies = 0;
        int idx = -1;
        for (int i = 0; i < giftsReceived[day].size(); ++i) {
            if (!used[i] && giftsReceived[day][i] > maxCandies) {
                maxCandies = giftsReceived[day][i];
                idx = i;
            }
        }
        if (idx != -1) {
            totalCandies += maxCandies;
            used[idx] = true;
        }
    }

    return totalCandies;
}


int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> gifts(m, vector<int>(2));
    for (int i = 0; i < m; i++) {
        cin >> gifts[i][0] >> gifts[i][1];
    }
    cout << maximum_candies(n, m, gifts) << endl;
    return 0;
}