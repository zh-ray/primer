#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string add(string &a1, string &a2)
{
    vector<int> result_I; //整数部分
    vector<int> result_D; //小数部分

    string s_result;               //最终结果
    string a1_I, a1_D, a2_I, a2_D; //分别为a1和a2的整数和小数部分
    int count_a1 = a1.find('.');
    int count_a2 = a2.find('.');

    //分割string
    if (count_a1 == a1.npos)
    {
        a1_I = a1;
        a1_D = "0";
    }
    else
    {
        a1_I = a1.substr(0, count_a1);
        a1_D = a1.substr(count_a1 + 1);
    }

    if (count_a2 == a2.npos)
    {
        a2_I = a2;
        a2_D = "0";
    }
    else
    {
        a2_I = a2.substr(0, count_a2);
        a2_D = a2.substr(count_a2 + 1);
    }
    // 小数位补零
    int distance = a1_D.size() - a2_D.size();
    if (distance < 0)
    {
        int d = abs(distance);
        while (d--)
        {
            a1_D.push_back('0');
        }
    }
    if (distance > 0)
    {
        while (distance--)
        {
            a2_D.push_back('0');
        }
    }

    //先计算小数部分
    result_D.push_back(0);
    int k = 0;
    for (int i = a1_D.size(); i > 0; i--)
    {
        int temp = a1_D[i - 1] - '0' + a2_D[i - 1] - '0' + result_D[k];
        if (temp > 9)
        {
            result_D[k] = temp % 10;

            if (i == 1)
            {
                result_I.push_back(1);
            }
            else
            {
                result_D.push_back(1);
            }
        }
        else
        {
            result_D[k] = temp;
            if (i == 1)
            {
                result_I.push_back(0);
            }
            else
            {
                result_D.push_back(0);
            }
        }
        k++;
    }

    //再计算整数部分
    k = 0;
    int i, j;
    for (i = a1_I.size(), j = a2_I.size(); i > 0 && j > 0; --i, --j)
    {
        int temp = a1_I[i - 1] - '0' + a2_I[j - 1] - '0' + result_I[k];

        if (temp > 9)
        {
            result_I[k] = temp % 10;
            result_I.push_back(1);
        }
        else
        {
            result_I[k] = temp;
            if (i - 1 && j - 1)
            {
                result_I.push_back(0);
            }
        }
        k++;
    }

    while (i--)
    {
        result_I.push_back(a1_I[i] - '0');
    }
    while (j--)
    {
        result_I.push_back(a2_I[j] - '0');
    }

    //字符串重组
    for (int m = result_I.size() - 1; m >= 0; --m)
    {
        char c = result_I[m] + '0';
        s_result.push_back(c);
    }

    //判断小数部分的0
    string d_result;
    for (int m = result_D.size() - 1; m >= 0; --m)
    {
        char c = result_D[m] + '0';
        d_result.push_back(c);
    }

    for (int i = d_result.size(); i > 0; --i)
    {
        if (d_result[i - 1] == '0')
        {
            d_result.pop_back();
        }
        else
        {
            break;
        }
    }

    if (d_result.size())
    {
        s_result.push_back('.');
        s_result += d_result;
    }

    return s_result;
}

// please don't modify any code below.
int main(void)
{
    string a1, a2, a3;
    cin >> a1 >> a2;
    a3 = add(a1, a2);
    cout << a3 << endl;
    return 0;
}