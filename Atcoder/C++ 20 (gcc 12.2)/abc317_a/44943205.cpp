#include<bits/stdc++.h>
using namespace std;
void rotate(vector<pair<char, int>> &v)
{
    int size = v.size();
    char last = v[size-1].first;
    for (int i = size-1; i >= 1; i--)
    {
        v[i].first = v[i-1].first;
    }
    v[0].first = last;
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
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        char c = s[i];
        
        v[x-1].emplace_back(c, i);
    }
    for (int i = 0; i < m; i++)
    {
        if(v[i].size() != 0)
            rotate(v[i]);
    } 
    
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