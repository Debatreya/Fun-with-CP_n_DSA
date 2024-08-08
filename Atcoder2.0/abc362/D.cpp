#include <bits/stdc++.h>
using namespace std;

void printAdj(const vector<vector<pair<int, long long>>> &adj){
    for(int i = 0; i < adj.size(); i++){
        cout << i << " -> ";
        for(const auto &edge : adj[i]){
            cout << "{" << edge.first << ", " << edge.second << "} ";
        }
        cout << endl;
    }
}

void dijkstra(int start, const vector<long long> &A, const vector<vector<pair<int, long long>>> &adj){
    int N = A.size();
    vector<long long> dist(N, LLONG_MAX);
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;

    dist[start] = A[start];
    pq.push({A[start], start});

    while(!pq.empty()){
        long long current_dist = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if(current_dist > dist[u])
            continue;

        for(const auto &edge : adj[u]){
            int v = edge.first;
            long long weight = edge.second;
            long long new_dist = dist[u] + weight + A[v];

            if(new_dist < dist[v]){
                dist[v] = new_dist;
                pq.push({new_dist, v});
            }
        }
    }

    for(int i = 1; i < N; i++){
        cout << dist[i] << " ";
    }
    cout << endl;
}

void solve(){
    int N, M;
    cin >> N >> M;
    vector<long long> A(N); // A is weight of each node
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    vector<vector<pair<int, long long>>> adj(N);
    for(int i = 0; i < M; i++){
        int u, v;
        long long b; // undirected edge between u and v with weight b
        cin >> u >> v >> b;
        u--; v--; // converting to 0-based index
        adj[u].emplace_back(v, b);
        adj[v].emplace_back(u, b);
    }

    // printAdj(adj);

    int start = 0; // 1-based index for vertex 1, 0 in 0-based index

    dijkstra(start, A, adj);
}

int main(){
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
