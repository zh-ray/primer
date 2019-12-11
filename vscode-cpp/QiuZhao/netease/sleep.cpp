#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> scores;
    vector<int> minutes;
    cin.get();
    char c;
    int num;

    while ((c = getchar()) != '\n')
    {
        if (c != ' ')
        {
            ungetc(c, stdin); //将c回退到标准输入stdin中
            cin >> num;
            scores.push_back(num);
        }
    }

    while ((c = getchar()) != '\n')
    {
        if (c != ' ')
        {
            ungetc(c, stdin);
            cin >> num;
            minutes.push_back(num);
        }
    }

    //暴力破解，时间超时
    /* int sum = 0;
    bool flag = true;
    for (size_t i = 0; i < n; ++i)
    {
        vector<int> temp = minutes;
        int sum_temp = 0;
        if (minutes[i] == 0)
        {

            flag = false;
            for (size_t j = 0; j < k && j + i < n; j++)
            {
                temp[i + j] = 1;
            }

            for (size_t k = 0; k < n; ++k)
            {
                sum_temp += scores[k] * temp[k];
            }
            sum = (sum > sum_temp ? sum : sum_temp);
        }
    }
    if (flag)
    {
        for (auto s : scores)
        {
            sum += s;
        }
    }

    cout << sum; */

    int sum_base = 0, sum_awake = 0, maxSum = 0;

    for (size_t i = 0; i < n; ++i)
    {
        if (minutes[i])
        {
            sum_base += scores[i];
            scores[i] = 0;
        }
    }
    if (k > n)
    {
        for (size_t i = 0; i < n; ++i)
        {
            maxSum += scores[i];
        }
    }
    else
    {
        for (size_t j = 0; j < n - k + 1; ++j)
        {
            sum_awake = 0;
            for (size_t jj = 0; jj < k; ++jj)
            {
                sum_awake += scores[jj + j];
            }
            maxSum = maxSum > sum_awake ? maxSum : sum_awake;
        }
    }
    cout << sum_base + maxSum;
}