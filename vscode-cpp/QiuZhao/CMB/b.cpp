#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
char s[100005];
int dp[100005][13];
int main()
{
    scanf("%s", s + 1);
    int n = strlen(s + 1);
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (s[i] != '?')
        {
            s[i] -= '0';
            for (int j = 0; j < 13; j++)
            {
                dp[i][(j * 10 + s[i]) % 13] = (dp[i][(j * 10 + s[i]) % 13] + dp[i - 1][j]) % mod;
            }
        }
        else
        {
            for (int k = 0; k < 10; k++)
            {
                for (int j = 0; j < 13; j++)
                {
                    dp[i][(j * 10 + k) % 13] = (dp[i][(j * 10 + k) % 13] + dp[i - 1][j]) % mod;
                }
            }
        }
    }
    printf("%d\n", dp[n][5]);
}