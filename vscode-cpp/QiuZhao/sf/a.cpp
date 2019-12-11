#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> temp,int end,int key)
{
    int left = 0;
    int right = end;
    int mid;
    while (left < right)
    {
        mid = left + (right - left) / 2;
        if (temp[mid] >= key)
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }

    }
    return left;
}
int main()
{
    int N;
    cin >> N;
    vector<int> nums(N);
    for (size_t i = 0; i < N; i++)
    {
        cin >> nums[i];
    }

    vector<int> temp(N);
    int pos = 0;
    temp[pos] = nums[0];
    for (int i = 0; i < N; i++)
    {
        if (nums[i] > temp[pos])
        {
            pos++;
            temp[pos] = nums[i];
        }
        else
        {
            temp[search(temp, pos, nums[i])] = nums[i];
        }
    }
    cout << pos + 1 << endl;
}