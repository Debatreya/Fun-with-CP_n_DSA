#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<pair<int, int>>> v(37);
    // cout<<"vector"<<endl;
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        int c;
        cin>>c;
        // cout<<"c taken"<<endl;
        for (int j = 0; j < c; j++)
        {
            int x;
            cin>>x;
            // cout<<"X read"<<endl;
            v[x].emplace_back(c, i);
            // cout<<v[x][j].first<<" "<<v[x][j].second<<endl;
        }
        
    }
    int x;
    cin>>x;
    sort(v[x].begin(), v[x].end());
    if(v[x].size() == 0)
    {
        cout<<0;
        return 0;
    }
    int count = 0;
    int choose = v[x][0].first;
    int i = 0;
    while (v[x][i].first == choose)
    {
        count++;
        i++;
    }
    cout<<count<<endl;
    for (int i = 0; i < count; i++)
    {
        cout<<v[x][i].second<<" ";
    }
    
    return 0;
}