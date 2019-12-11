#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N_num;
    cin >> N_num;
    vector<int> nums(N_num, 0);
    for (size_t i = 0; i < N_num; i++)
    {
        cin >> nums[i];
    }
    int maxLength = 0;
    for (size_t i = 0; i < N_num - 1; i++)
    {
        if (nums[i] < nums[i + 1])
        {
            int temp = 1;
            while (i < N_num - 1 && nums[i] < nums[i + 1])
            {
                i++;
                temp++;
            }
            while (i < N_num - 1 && nums[i] > nums[i + 1])
            {
                i++;
                temp++;
            }
            if (nums[i - 1] > nums[i])
            {
                maxLength = maxLength > temp ? maxLength : temp;
            }
            i--;
        }
    }
    cout << maxLength << endl;
    return 0;
}