#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int N;
    cin >> N;
    vector<vector<int>> range(N, vector<int>(2));
    for (int i = 0; i < N; i++)
    {
        cin >> range[i][0] >> range[i][1];
    }
    vector<int> ans(N, 0);
    vector<bool> visited(N, false);
    long long sum = 0;
    // first inserting where left range is greater than 0
    for (int i = 0; i < N; i++)
    {
        if (range[i][0] > 0)
        {
            ans[i] = (range[i][0]);
            sum += range[i][0];
            visited[i] = true;
        }
    }
    // now taking the right range which is less than 0 (we will minimize the sum)
    for (int i = 0; i < N; i++)
    {
        if (range[i][1] < 0 && !visited[i])
        {
            if (sum + range[i][0] >= 0)
            {
                ans[i] = (range[i][0]);
                sum += range[i][0];
                visited[i] = true;
            }
            else
            {
                ans[i] = (-sum);
                sum = 0;
                break;
            }
        }
    }
    // now taking the remaining ranges i.e trying to make sum 0, once we reach 0 we will break
    if (sum > 0)
        for (int i = 0; i < N; i++)
        {
            if (!visited[i])
            {
                if (sum + range[i][0] >= 0)
                {
                    ans[i] = range[i][0];
                    sum += range[i][0];
                }
                else
                {
                    ans[i] = -sum;
                    sum = 0;
                    break;
                }
            }
        }
    // now printing the answer
    if (sum == 0)
    {
        cout << "Yes" << endl;
        for (int i = 0; i < N; i++)
        {
            cout << ans[i] << " ";
        }
    }
    else
    {
        cout << "No" << endl;
    }
}
int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}