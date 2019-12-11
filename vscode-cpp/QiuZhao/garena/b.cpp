#include <cstdio>
#include <vector>

using namespace std;

// 返回出现了一次的数字的位置
int single_none_duplicate(const vector<int> &nums)
{
    int low = 0, high = nums.size() - 1;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
        {
            return mid;
        }
        if (mid % 2 == 0)
        {
            if (nums[mid] == nums[mid + 1])
            {
                low = mid;
            }
            else
            {
                high = mid;
            }
        }
        else
        {
            if (nums[mid] == nums[mid - 1])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return low;
}

// 不要修改下面的内容
int main()
{
    int N = 0;
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
        int index = single_none_duplicate(nums);
        printf("%d\n", index);
    }
}