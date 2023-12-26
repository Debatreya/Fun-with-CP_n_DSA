#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> Pair;
struct PairComparator {
  bool operator()(const Pair& a, const Pair& b) const {
    return a.first < b.first;
  }
};
void solve(){
    int n;
    cin>>n;
    // priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Aq;
    // priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Bq;
    priority_queue<Pair, vector<Pair>, PairComparator> Aq, Bq;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        pair<int, int> p;
        p.first = a[i];
        p.second = i;
        Aq.push(p);
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
        pair<int, int> p;
        p.first = b[i];
        p.second = i;
        Bq.push(p);
    }
    int visited[n] = {0}, idx;
    while (!Aq.empty() || !Bq.empty())
    {
        //Alice game
        idx = Aq.top().second;
        // cout<<idx<<" a ";
        if(visited[idx] == 0){
            a[idx] -= 1;
            b[idx] = 0;
            visited[idx] = 1;
            Aq.pop();
        }
        else
        {
            Aq.pop();
        }
        
        //Bob game
        idx = Bq.top().second;
        // cout<<idx<<" b ";
        if(visited[idx] == 0){
            a[idx] = 0;
            b[idx] -= 1;
            visited[idx] = 1;
            Bq.pop();
        }
        else
        {
            Bq.pop();
        }
        
    }
    int A=0, B=0;
    for (int i = 0; i < n; i++)
    {
        A+=a[i];
        B+=b[i];
        // cout<<a[i]<<" "<<b[i]<<endl;
    }
    cout<<"ans"<<" ";
    cout<<A-B<<endl;
    
}
int main(){
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}