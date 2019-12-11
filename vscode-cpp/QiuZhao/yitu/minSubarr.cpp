#include <iostream>
#include <vector>
using namespace std;

vector<int> minSubarr(vector<int> &nums, int M)
{
    int start = 0, minLen = INT_MAX;
    int left = 0, right = 0;

    vector<int> window(M + 1);

    int match = 0;
    while (right < nums.size())
    {
        if (!window[nums[right]])
        {
            match++;
        }
        window[nums[right]]++;
        right++;
        while (match == M)
        {
            if (right - left < minLen)
            {
                start = left;
                minLen = right - left;
            }
            if (window[nums[left]])
            {
                window[nums[left]]--;
                if (!window[nums[left]])
                {
                    match--;
                }
            }
            else
            {
                match--;
            }
            left++;
        }
    }
    vector<int> temp(nums.begin() + start, nums.begin() + start + minLen);
    return temp;
}

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> nums(N);
    for (size_t i = 0; i < N; i++)
    {
        cin >> nums[i];
    }
    vector<int> result = minSubarr(nums, M);
    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;
}