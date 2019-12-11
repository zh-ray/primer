#include <iostream>
#include <stack>
#include <vector>
using namespace std;
#define mod 1000000007

int cal1(vector<int> &nums)
{
    int len = nums.size();
    vector<int> dp(len);
    dp[0] = nums[0];
    int result = dp[0];
    for (int i = 1; i < len; i++)
    {
        if (nums[i] <= nums[i - 1])
        {
            dp[i] = dp[i - 1] + nums[i];
        }
        else
        {
            int j = i - 1;
            while (j >= 0 && nums[i] > nums[j])
            {
                j--;
            }
            dp[i] = (j < 0) ? (i + 1) * nums[i] : (dp[j] + (i - j) * nums[i]);
        }
        result = (result + dp[i]) % mod;
    }
    return result;
}

int cal2(vector<int> &nums)
{
    int len = nums.size();
    vector<int> dp(len + 1);
    int result = 0;
    stack<int> maxPos; // 存储最大值的下标
    maxPos.push(-1);
    for (int i = 0; i < len; i++)
    {
        while (maxPos.top() != -1 && nums[i] >= nums[maxPos.top()])
        {
            maxPos.pop();
        }
        dp[i + 1] = (dp[maxPos.top() + 1] + (i - maxPos.top()) * nums[i]) % mod;
        maxPos.push(i);
        result = (result + dp[i + 1]) % mod;
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << cal2(nums) << endl;
    return 0;
}