#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, x;
    cin>>n>>h>>x;
    int achieve = x-h;
    for (int i = 1; i <= n; i++)
    {
        int p;
        cin>>p;
        if(p >= achieve){
            achieve = i;
            break;
        }
    }
    cout<<achieve<<endl;
    return 0;
}