#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n + 1);
    int res = 1;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        nums[i] = i;
    }
    for (int i = 5; i <= n; i += 5)
    {
        while (nums[i] % 5 == 0)
        {
            nums[i] /= 5;
            cnt++;
        }
    }
    for(int i = 2; i / 2 <= cnt; i += 2)
    {
        nums[i] /= 2;
    }
    for (int i = 2; i <= n; i++)
    {
        res *= nums[i];
        while (res % 10 == 0)
        {
            res /= 10;
        }
        res %= 10;
    }
    cout << res << endl;
    return 0;
}