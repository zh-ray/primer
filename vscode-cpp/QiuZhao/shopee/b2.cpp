#include <iostream>
#include<vector>
#include<limits>

using namespace std;

int main()
{
    int candidate; // 候选人数
    cin >> candidate;

    string xiaona(60, '0');
    vector<string> targets(candidate, xiaona);

    // 初始化候选人信息
    for (size_t i = 0; i < candidate; i++)
    {
        int temp;
        cin >> temp;
        targets[i][temp-1] = '1';
    }

    //初始化小娜信息
    int p;
    cin >> p;
    for (size_t i = 0; i < p; i++)
    {
        xiaona[p - 1] = '1';
    }

    vector<int> result(candidate, 0);
    for (size_t i = 0; i < candidate; i++)
    {
        for (size_t j = 0; j < 60; j++)
        {
            if ((xiaona[j]&targets[i][j]) == 1)
            {
                result[i]++;
            }

        }

    }

    int n = numeric_limits<int>::min();
    for (size_t i = 0; i < result.size(); i++)
    {
        n = (result[i] > n ? result[i] : n);
    }

    cout << n << endl;

}
