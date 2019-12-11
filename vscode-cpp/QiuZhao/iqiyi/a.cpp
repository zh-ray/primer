#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> nums(N - 1);
    for (int i = 0; i < N - 1; i++)
    {
        cin >> nums[i];
    }
    int res = 0, M = 1e9 + 7;
    vector<vector<int>> dp(N, vector<int>(N));
    dp[0][0] = 1;
    for (int i = 1; i < N; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (nums[i - 1])
            {
                for (int k = j; k <= i - 1; ++k)
                {
                    dp[i][j] = (dp[i][j] + dp[i - 1][k]) % M;
                }
            }
            else
            {
                for (int k = 0; k <= j - 1; ++k)
                {
                    dp[i][j] = (dp[i][j] + dp[i - 1][k]) % M;
                }
            }
        }
    }
    for (int i = 0; i < N; ++i)
    {
        res = (res + dp[N - 1][i]) % M;
    }
    cout << res << endl;
    return 0;
}