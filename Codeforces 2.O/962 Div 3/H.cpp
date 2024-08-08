#include <bits/stdc++.h>
using namespace std;

class UnionFind {
public:
    UnionFind(int n) : parent(n), rank(n, 0) {
        iota(parent.begin(), parent.end(), 0);
    }
    
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]); // Path compression
        }
        return parent[x];
    }
    
    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }

private:
    vector<int> parent;
    vector<int> rank;
};

void solve() {
    int n, m;
    cin >> n >> m;
    UnionFind uf(n);
    
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        uf.unite(a - 1, b - 1); // Convert to 0-based index
    }
    
    // Count distinct components
    set<int> components;
    for (int i = 0; i < n; i++) {
        components.insert(uf.find(i));
    }
    
    int numComponents = components.size();
    int minRoads = n - numComponents;
    
    cout << minRoads << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}