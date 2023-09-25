#include<bits/stdc++.h>
using namespace std;
void rotate(vector<pair<char, int>> &v)
{
    // for (int j = 0; j < v.size(); j++)
    //     {
    //         cout<<v[j].first<<" "<<v[j].second;
    //     }
    int size = v.size();
    char last = v[size-1].first;
    // cout<<" Last"<<last;
    for (int i = size-1; i >= 1; i--)
    {
        // cout<<v[i].first<<" "<<v[i-1].first;
        v[i].first = v[i-1].first;
    }
    v[0].first = last;
    // cout<<endl;
}
int main()
{
    int n, m;
    cin>>n>>m;
    char s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    
    vector<vector<pair<char, int>>> v(m);
    // cout<<size<<endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        char c = s[i];
        
        v[x-1].emplace_back(c, i);
        // cout<<c<<endl;
    }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = 0; j < v[i].size(); j++)
    //     {
    //         cout<<v[i][j].first<<" "<<v[i][j].second;
    //     }
    //     cout<<endl;
    // }
    for (int i = 0; i < m; i++)
    {
        if(v[i].size() != 0)
            rotate(v[i]);
    }
    // cout<<s<<endl;
    
    
    for (int i = 0; i < m; i++)
    {
        if(v[i].size() != 0){
            int size = v[i].size();
            for(int j = 0; j < size; j++)
                s[v[i][j].second] = v[i][j].first;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<s[i];
    }
    return 0;
}