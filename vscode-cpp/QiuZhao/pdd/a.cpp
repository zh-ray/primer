#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
bool compare(int a, int b)
{
    if (a % 2 == 0 && b % 2 != 0)
    {
        return true;
    }
    else if (a % 2 != 0 && b % 2 == 0)
    {
        return false;
    }
    else
    {
        return a > b;
    }
}
int main()
{
    vector<int> nums;
    string inputs;
    int N;
    cin >> inputs;

    for (size_t i = 0; i < inputs.size(); i++)
    {
        int temp = 0;
        while (isdigit(inputs[i]) && i < inputs.size())
        {
            temp = 10 * temp + (inputs[i] - '0');
            i++;
        }
        if (inputs[i] == ',' || inputs[i] == ';')
        {
            nums.push_back(temp);
        }
        if (i == inputs.size())
        {
            N = temp;
        }
    }
    sort(nums.begin(), nums.end(), compare);
    for (size_t i = 0; i < N; i++)
    {
        cout << nums[i];
        if (i != N - 1)
        {
            cout << ',';
        }
    }
    return 0;
}