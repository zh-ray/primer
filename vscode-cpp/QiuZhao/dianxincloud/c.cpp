#include <iostream>
#include <vector>
using namespace std;
int main()
{
    char c;
    int num = 0;
    bool flag = true;
    vector<int> nums;
    while ((c = getchar()) != '\n')
    {
        if (isdigit(c) || c == '-')
        {
            if (c == '-')
            {
                flag = false;
                continue;
            }
            num = num * 10 + (c - '0');
            continue;
        }
        if (flag)
        {
            nums.push_back(num);
        }
        else
        {
            nums.push_back(0 - num);
        }
        num = 0;
        flag = true;
    }
    if (flag)
    {
        nums.push_back(num);
    }
    else
    {
        nums.push_back(0 - num);
    }
    for (int a : nums)
    {
        cout << a << endl;
    }
}