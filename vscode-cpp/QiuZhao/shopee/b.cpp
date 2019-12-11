#include <iostream>
#include <limits>
#include <vector>

using namespace std;

struct candidate
{
    int counts;
    vector<int> target;
};

int main()
{
    int candidate; // 候选人数

    cin >> candidate;
    vector<vector<int>> targets(candidate);

    // 初始化候选人信息
    for (size_t i = 0; i < candidate; i++)
    {
        int temp;
        cin >> temp;
        for (size_t j = 0; j < temp; j++)
        {
            int n;
            cin >> n;
            targets[i].push_back(n);
        }
    }

    // 初始化小娜信息
    int p;
    cin >> p;
    vector<int> xiaona;
    for (size_t i = 0; i < p; i++)
    {
        int temp;
        cin >> temp;
        xiaona.push_back(temp);
    }

    int result = numeric_limits<int>::min(), best = 0;
    for (size_t i = 0; i < candidate; i++)
    {
        int count = 0;
        for (size_t k = 0; k < p; k++)
        {

            for (size_t j = 0; j < targets[i].size(); j++)
            {
                if (xiaona[k] == targets[i][j])
                {
                    count++;
                    break;
                }
            }
        }
        if (result < count)
        {
            best = i + 1;
            result = count;
        }
    }

    cout << best << endl;
}
