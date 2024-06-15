#include<bits/stdc++.h>
using namespace std;

vector<long> countMinimumOperations(vector<int> price, vector<int> query) {
    sort(price.begin(), price.end());
    int n = price.size();
    int q = query.size();
    vector<long> result(q);
    for (int i = 0; i < q; i++) {
        int target = query[i];
        // Use binary search to find the closest price to the query
        int closestPrice = lower_bound(price.begin(), price.end(), target) - price.begin();
        // Calculate operations for closest price
        long operations = 0;
        if (closestPrice < n)
            operations += abs(price[closestPrice] - target);
        // Check previous price if exists
        if (closestPrice > 0)
            operations = std::min(operations, static_cast<long>(abs(price[closestPrice - 1] - target)));
        result[i] = operations * n;
    }
    return result;
}

int main() {
    int n, q;
    cin >> n;
    vector<int> price(n);
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }
    cin >> q;
    vector<int> query(q);
    for (int i = 0; i < q; i++) {
        cin >> query[i];
    }
    vector<long> result = countMinimumOperations(price, query);
    for (int i = 0; i < q; i++) {
        cout << result[i] << endl;
    }
    return 0;
}


// Complexity :
// O(nlogn) for sorting the prices
// O(qlogn) for each query
// O(n) for calculating the operations  
// O(nlogn + qlogn + n) = O(nlogn + qlogn) = O(nlogn) for the entire code