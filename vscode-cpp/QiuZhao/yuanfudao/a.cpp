#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N_num, M_max;
    cin >> N_num >> M_max;
    if (N_num == 0)
    {
        return 0;
    }
    vector<int> nums;
    vector<int> result;
    for (size_t i = 0; i < N_num; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    for (size_t i = 0; i < N_num; i++)
    {
        if (find(result.begin(), result.end(), nums[i]) == result.end())
        {
            int times = count(nums.begin(), nums.end(), nums[i]);
            if (times <= M_max)
            {
                result.push_back(nums[i]);
            }
        }
        else
        {
            result.push_back(nums[i]);
        }
    }
    for (int r : result)
    {
        cout << r << " ";
    }
    cout << endl;
    return 0;
}