#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int Counts(vector<int> &coins, int target)
    {
        if (target < 1)
        {
            return 0;
        }
        vector<int> dp(target + 1);
        int sum = 0;
        while (++sum <= target)
        {
            int minCoin = -1;
            for (int coin : coins)
            {
                if (sum >= coin && dp[sum - coin] != -1)
                {
                    int temp = dp[sum - coin] + 1;
                    minCoin = minCoin < 0 ? temp : (temp < minCoin ? temp : minCoin);
                }
            }
            dp[sum] = minCoin;
        }
        return dp[target];
    }
};