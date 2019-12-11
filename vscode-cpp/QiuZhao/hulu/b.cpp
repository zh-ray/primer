#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define mod 1000000007
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    vector<vector<int>> dp(n, vector<int>(n));
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        dp[i][i] = nums[i];
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            dp[i][j] = max(dp[i - 1][j], dp[i][j + 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            result = (result % mod + dp[i][j] % mod) % mod;
        }
    }
    cout << result % mod << endl;
    return 0;
}