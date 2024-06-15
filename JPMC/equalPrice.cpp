
#include <bits/stdc++.h>
using namespace std;
vector<long> countMinimumOperations(vector<int> price, vector<int> query) {
    int n = price.size();
    int q = query.size();
    vector<long> result(q);
    for (int i = 0; i < q; i++) {
        long operations = 0;
        for (int j = 0; j < n; j++) {
            operations += abs(price[j] - query[i]);
        }
        result[i] = operations;
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
    cin>>q;
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
