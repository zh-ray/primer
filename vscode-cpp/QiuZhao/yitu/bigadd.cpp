/* 整体思想是利用十进制的补码来实现相加减
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> dec_add(vector<int> a_new, vector<int> b_new)
{
    int sizes = a_new.size();
    int carry = 0;
    for (size_t i = 0; i < sizes; i++)
    {
        int value = a_new[sizes - i - 1] + b_new[sizes - i - 1] + carry;
        if (value >= 10)
        {
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        value %= 10;
        a_new[sizes - i - 1] = value;
    }
    return a_new;
}

vector<int> complement(vector<int> &a_new)
{
    if (a_new[0] == 9)
    {
        for (int i = 1; i < a_new.size(); ++i)
        {
            a_new[i] = 9 - a_new[i];
        }
        vector<int> temp(a_new.size());
        temp[a_new.size() - 1] = 1;
        return dec_add(a_new, temp);
    }
    else
    {
        return a_new;
    }
}

string vectorToString(vector<int> res)
{
    string result;
    result.clear();
    if (res[0] == 9)
    {
        result.push_back('-');
    }
    int tag = 0;
    for (int i = 1; i < res.size(); i++)
    {
        if (res[i] == 0)
        {
            tag++;
        }
        else
        {
            break;
        }
    }
    for (int i = tag + 1; i < res.size(); i++)
    {
        result.push_back(res[i] + '0');
    }
    if (result.size() == 0)
    {
        return "0";
    }
    return result;
}

string bigadd(string &a_str, string &b_str)
{
    if ("" == a_str && "" == b_str)
    {
        return 0;
    }
    else if ("" == a_str)
    {
        return b_str;
    }
    else if ("" == b_str)
    {
        return a_str;
    }

    bool a_sign = true, b_sign = true; // true表示＋，false表示－
    if (a_str[0] == '-')
    {
        a_sign = false;
        a_str = a_str.substr(1);
    }
    if (b_str[0] == '-')
    {
        b_sign = false;
        b_str = b_str.substr(1);
    }
    // 长度加2是预留符号位和溢出位
    int maxSize = a_str.size() > b_str.size() ? a_str.size() + 2 : b_str.size() + 2;
    vector<int> a_new(maxSize);
    vector<int> b_new(maxSize);
    a_new[0] = a_sign ? 0 : 9;
    b_new[0] = b_sign ? 0 : 9;
    for (int i = 0; i < a_str.size(); ++i)
    {
        a_new[maxSize - a_str.size() + i] = a_str[i] - '0';
    }
    for (int i = 0; i < b_str.size(); ++i)
    {
        b_new[maxSize - b_str.size() + i] = b_str[i] - '0';
    }
    // 计算补码并计算
    vector<int> res = dec_add(complement(a_new), complement(b_new));
    return vectorToString(complement(res));
}

int main()
{
    string a_str, b_str;
    cin >> a_str >> b_str;
    cout << bigadd(a_str, b_str) << endl;
    return 0;
}