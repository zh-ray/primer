#include <iostream>
#include <vector>
using namespace std;
int main()
{
    const int maxNum = 100000;
    int t_groups, k;
    cin >> t_groups >> k;
    int(*dp)[2] = new int[maxNum][2];
    vector<int> result(maxNum);
    dp[0][0] = 1;
    dp[0][1] = 0;
    for (size_t i = 1; i < maxNum; i++)
    {
        dp[i][0] = dp[i - 1][0];
        dp[i][1] = dp[i - 1][1];
        if (i >= k)
        {
            dp[i][1] += dp[i - k][0] + dp[i - k][1];
        }
    }
    for (size_t i = 1; i < maxNum; i++)
    {
        result[i] = result[i - 1] + dp[i][0] + dp[i][1];
    }

    int a, b;
    while (t_groups--)
    {
        cin >> a >> b;
        cout << result[b] - result[a - 1] << endl;
    }

    delete[] dp;
    return 0;
}