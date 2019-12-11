#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> nums(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int result = 0;
    if (n <= k)
    {
        sort(nums.begin(), nums.end());
        while (m--)
        {
            result += nums.back();
            nums.pop_back();
        }
    }
    else
    {

        for (size_t i = 0; i < n; i++)
        {
            if (i <= k)

        }

    }
    cout << result << endl;
    return 0;
}