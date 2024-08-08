#include <bits/stdc++.h>
using namespace std;

long long dp[25][25];

long long calc(long long a, long long b, char op)
{
    if (op == '+')
        return a + b;
    else
        return a * b;
}

long long dfs(string s, int pos, int cnt)
{
    if (cnt == 0)
        return stol(s.substr(pos));
    if (dp[pos][cnt] != -1)
        return dp[pos][cnt];
    long long res = 1e18;
    for (int i = pos; i < s.size() - cnt; i++)
    {
        long long a = stol(s.substr(pos, i - pos + 1));
        long long b = dfs(s, i + 1, cnt - 1);
        res = min(res, calc(a, b, '+'));
        res = min(res, calc(a, b, '*'));
    }
    return dp[pos][cnt] = res;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    memset(dp, -1, sizeof(dp));
    cout << dfs(s, 0, n - 2) << endl;
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