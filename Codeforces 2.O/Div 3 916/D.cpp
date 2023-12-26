#include<bits/stdc++.h>
using namespace std;
struct CompareVectors {
    bool operator()(const std::vector<int>& v1, const std::vector<int>& v2) const {
        // Compare based on the first element of the vectors
        return v1[0] < v2[0]; 
    }
};
void solve(){
    int n;
    cin>>n;
    priority_queue<std::vector<int>, std::vector<std::vector<int>>, CompareVectors> pq;
    vector<int> a, b, c;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
        vector<int> v = {x, i, 0};
        pq.push(v);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        b.push_back(x);
        vector<int> v = {x, i, 1};
        pq.push(v);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        c.push_back(x);
        vector<int> v = {x, i, 2};
        pq.push(v);
    }
    
    int visited[n] = {0}, type[3] = {0}, sum = 0, count = 0;
    while(!pq.empty()){
        int frnds = pq.top()[0];
        int idx = pq.top()[1];
        int typeidx = pq.top()[2];
        
        if(visited[idx] == 0 and type[typeidx] == 0 and count < 3){
            sum+=frnds;
            visited[idx] = 1;
            type[typeidx] = 1;
            count++;
            pq.pop();
        }
        else{
            pq.pop();
        }
    }
    cout<< sum << endl;
}
int main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}