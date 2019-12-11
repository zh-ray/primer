#include <algorithm>
#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int jump(vector<int> &steps)
{
    if (steps.size() == 0)
    {
        return -1;
    }
    int maxcover = 0, step = 0, lastcover = 0;
    for (int i = 0; i <= maxcover && i < steps.size(); ++i)
    {
        if (i > lastcover)
        {
            step++;
            lastcover = maxcover;
        }
        if (steps[i] + i > maxcover)
        {
            maxcover = steps[i] + i;
        }
    }
    if (maxcover < steps.size() - 1)
    {
        return -1;
    }
    return step;
}

// 不要修改下面的内容
int main()
{
    /* int N = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i)
    {
        int M = 0;
        scanf("%d", &M);
        vector<int> nums(M, 0);
        for (int j = 0; j < M; j++)
        {
            //int num = 0;
            scanf("%d", &nums[j]);
        }
        int step = jump(nums);
        printf("%d\n", step);
    } */

    vector<int> nums{5, 1, 2, 3, 0, 1};
    cout << jump(nums) << endl;
}