#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<string> strs; // 存放被数字分割的字符串
    vector<int> nums;    // 存放数字
    vector<int> res(26); // 存放结果
    string str;
    cin >> str;
    string temp;
    for (int i = 0; i < str.size(); i++)
    {
        if (!isdigit(str[i]))
        {
            temp.push_back(str[i]);
        }
        else
        {
            strs.push_back(temp);
            temp.clear();
            int num = str[i] - '0';
            i++;
            while (i < str.size() && isdigit(str[i]))
            {
                num = 10 * num + (str[i] - '0');
            }
            i--;
            nums.push_back(num);
        }
    }
    for (int i = 0; i < strs.size(); i++)
    {
        temp.clear();
        auto iter = find(strs[i].begin(), strs[i].end(), '-');
        if (iter == strs[i].end())
        {
            temp = strs[i];
            for (int j = 0; j < temp.size(); j++)
            {
                if (isupper(temp[j]))
                {
                    res[temp[j] - 'A'] += nums[i];
                }
                else
                {
                    res[temp[j] - 'a'] += nums[i];
                }
            }
        }
        else
        {
            int low = *(iter - 1) - '0';
            int high = *(iter + 1) - '0';

            while (low++ && low <= 90 && low < high)
            {
                res[low - 65] += nums[i];
            }
            while (high-- && high >= 97 && low < high)
            {
                res[high - 97] += nums[i];
            }
        }
    }
    auto maxPos = max_element(res.begin(), res.end());
    char c = 'a' + maxPos - res.begin();
    cout << c << *maxPos << endl;
    return 0;
}