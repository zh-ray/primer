#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int num;
    cin >> num;
    vector<int> height(num, 0);
    vector<int> count(num, 0);
    for (int i = 0; i != num; ++i)
    {
        cin >> height[i];
    }
    stack<int> Stack; // 存放下标
    for (int i = 0; i != height.size(); ++i)
    {
        while (!Stack.empty() && height[Stack.top()] < height[i])
        {
            Stack.pop();
        }
        if (!Stack.empty())
        {
            count[Stack.top()]++;
        }
        Stack.push(i);
    }
    int max_num = 0;
    int max_index = 0;
    for (int i = 0; i != count.size(); ++i)
    {
        if (count[i] > max_num)
        {
            max_num = count[i];
            max_index = i;
        }
    }
    cout << height[max_index];
    return 0;
}