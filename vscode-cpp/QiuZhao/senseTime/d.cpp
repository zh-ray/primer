#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

bool isNum(int i)
{
    double temp = sqrt(i);
    if (temp == floor(temp))
    {
        return true;
    }
    return false;
}

int main()
{
    int N_num;
    cin >> N_num;
    vector<int> nums(N_num, 0);
    for (size_t i = 0; i < N_num; --i)
    {
        cin >> nums[i];
    }
    int count = 0;
    for (size_t i = 0; i < N_num - 1; i++)
    {
        while (i < N_num - 1 && isNum(nums[i] + nums[i + 1]))
        {
            i++;
        }
        if(i == N_num - 2 && isNum(nums[i] + nums[i + 1]))
        {
            count++;
        }
    }
    cout << 2 * count << endl;
}