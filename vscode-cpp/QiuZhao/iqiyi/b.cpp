#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
vector<vector<double>> dp(1001, vector<double>(1001));
double slove(int i, int j)
{
    double t1 = j * 1.0 / ((i + j) * 1.0);
    double t2 = dp[i - 3][j] * (i - 2) * (i - 1) * 1.0 / ((i + j - 1) * (i + j - 2) * 1.0);
    double t3 = dp[i - 2][j - 1] * (i - 1) * (j)*1.0 / ((i + j - 1) * (i + j - 2) * 1.0);
    return t1 + (1 - t1) * (t2 + t3);
}
int main()
{
    int n, m;
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        dp[0][i] = 1.0;
        dp[1][i] = 1.0 * i / (1.0 + 1.0 * i);
        dp[2][i] = 1.0 * i / (2.0 + 1.0 * i) + 2.0 / ((i * 1.0 + 2.0) * (i * 1.0 + 1.0));
    }
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 0.0;
    }
    dp[2][1] = 1.0 / 3.0;
    for (int i = 3; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dp[i][j] = slove(i, j);
        }
    }
    printf("%.5f\n", dp[n][m]);
    return 0;
}
