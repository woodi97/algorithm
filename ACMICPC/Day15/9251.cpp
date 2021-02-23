#include <iostream>
#include <string>
#include <vector>
using namespace std;

int dp[1001][1001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string f, s;
    cin >> f >> s;

    //init
    int i, j, stack = 0;
    for (i = 0; i < f.size(); i++)
    {
        if (s[0] == f[i])
        {
            stack = 1;
            dp[0][i] = stack;
        }
        else
            dp[0][i] = stack;
    }
    stack = 0;
    for (i = 0; i < s.size(); i++)
    {
        if (f[0] == s[i])
        {
            stack = 1;
            dp[i][0] = stack;
        }
        else
            dp[i][0] = stack;
    }

    //solution
    int limit_idx = 0;
    for (i = 1; i < s.size(); i++)
    {
        for (j = 1; j < f.size(); j++)
        {
            if (s[i] == f[j])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                if (dp[i - 1][j] > dp[i][j - 1])
                    dp[i][j] = dp[i - 1][j];
                else
                    dp[i][j] = dp[i][j - 1];
            }
        }
    }

    cout << dp[s.size() - 1][f.size() - 1];
    return 0;
}