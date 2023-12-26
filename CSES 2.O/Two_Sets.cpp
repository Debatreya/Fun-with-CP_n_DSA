#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long sum = n*(n+1)/2;
    if(sum%2 == 0){
        cout<<"YES"<<endl;
        sum/=2;
        vector<long long> v1, v2;
        long long i = n;
        while(sum){
            if(sum>=i){
                v1.push_back(i);
                sum-=i;
                i--;
            }
            else{
                v1.push_back(sum);
                sum = 0;
            }
        }
        sort(v1.begin(), v1.end());
        int k = 0;
        for (long long j = 1; j < n; j++)
        {
            if(j == v1[k]){
                k++;
            }
            else{
                v2.push_back(j);
            }
        }
        cout<<v1.size()<<endl;
        for(auto j : v1 ){
            cout<<j<<" ";
        }
        cout<<endl<<v2.size()<<endl;
        for(auto j: v2){
            cout<<j<<" ";
        }
    }
    else{
        cout<<"NO";
    }
    cout<<endl;
    return 0;
}