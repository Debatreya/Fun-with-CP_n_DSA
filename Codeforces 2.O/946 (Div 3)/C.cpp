#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // Vector of maps
    vector<map<int, int>> dp(n - 2);
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            dp[i][j] = 0;
        }
    }
    // Vector of indices of idx
    vector<int> idx(n - 2);
    for (int i = 0; i < n - 2; i++)
    {
        idx[i] = i;
    }
    // Check if values of any two idx are equal
    for (int k = 1; k <= 3; k++)
    {
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 2; j++)
            {
                if (a[idx[i]] != a[idx[j]])
                {
                    dp[i][j] += 1;
                }
            }
            idx[i]++;
        }
    }
    // Check the values of dp (count number of 1s)
    int ans = 0;
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-2; j++){
            if(dp[i][j] == 1){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
// Time limit exceeded and Space Limit Exceeded