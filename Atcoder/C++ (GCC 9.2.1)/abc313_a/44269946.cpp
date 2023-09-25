#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> ability(n);
    cin>>ability[0];
    int maxP = 0;
    for (int i = 1; i < n; i++)
    {
        cin>>ability[i];
        maxP = max(maxP, ability[i]);
    }
    if(maxP >= ability[0])
        cout<<maxP-ability[0]+1;
    else
        cout<<0;
    return 0;
}