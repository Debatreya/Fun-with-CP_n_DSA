#include<bits/stdc++.h>
using namespace std;
//using a concept of Permutation and Combination
int main()
{
    long long n;
    cin>>n;
    long long five = 0;
    for(int i = 5; i<=n; i*=5){
        five+=(n/i);
    }
    cout<<five;
    return 0;
}