#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int N_string = 6;
    // cin >> N_string;
    string chars{"AaAAAA"};
    // cin >> chars;
    int(*dp)[2] = new int[N_string][2];
    if (isupper(chars[0]))
    {
        dp[0][0] = 2;
        dp[0][1] = 2;
    }
    else
    {
        dp[0][0] = 1;
        dp[0][1] = 2;
    }

    for (size_t i = 1; i < N_string; i++)
    {
        if (isupper(chars[i]))
        {
            dp[i][0] = min(dp[i - 1][0] + 2, dp[i - 1][1] + 2);
            dp[i][1] = min(dp[i - 1][0] + 2, dp[i - 1][1] + 1);
        }
        else
        {
            dp[i][0] = min(dp[i - 1][0] + 1, dp[i - 1][1] + 2);
            dp[i][1] = min(dp[i - 1][0] + 2, dp[i - 1][1] + 2);
        }
    }
    cout << min(dp[N_string - 1][0], dp[N_string - 1][1]) << endl;
    delete[] dp;
    return 0;
}