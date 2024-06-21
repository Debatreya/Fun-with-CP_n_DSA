#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (int i = 1; i < n; ++i)
    {
        v[i]+=v[i-1];
    }
    int sum = v[n-1], start = v[0];
    n+=1;
    int reqSum = n*start + n*(n-1)/2;
    cout<<reqSum-sum;
    return 0;
}