#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int N_number;
    cin >> N_number;
    vector<string> op;
    vector<string> result;
    for (size_t i = 0; i < 2 * N_number - 1; i++)
    {
        string temp;
        cin >> temp;
        op.push_back(temp);
    }
    // 确定第一个运算符
    bool flag;
    if (op[1] == "+" || op[1] == "-")
    {
        flag = true;
    }
    else
    {
        flag = false;
    }
    vector<int> first;
    vector<string> second;
    for (size_t i = 0; i < 2 * N_number - 1; i++)
    {
        if (flag)
        {
            // 第一个运算符是加减
            while (i < 2 * N_number - 2 && op[i + 1] != "*" && op[i + 1] != "/")
            {
                first.push_back(stoi(op[i++]));
                second.push_back(op[i++]);
            }
            sort(first.begin(), first.end());
            for (size_t j = 0; j < first.size(); j++)
            {
                result.push_back(to_string(first[j]));
                result.push_back(second[j]);
            }
            first.clear();
            second.clear();
            while (i < 2 * N_number - 2 && op[i + 1] != "+" && op[i + 1] != "-")
            {
                first.push_back(stoi(op[i++]));
                second.push_back(op[i++]);
            }
            first.push_back(stoi(op[i++]));
            sort(first.begin(), first.end());
            for (size_t j = 0; j < second.size(); j++)
            {
                result.push_back(to_string(first[j]));
                result.push_back(second[j]);
            }
            result.push_back(to_string(first.back()));
            result.push_back(op[i++]);
            first.clear();
            second.clear();
        }
        else
        {
            while (i < 2 * N_number - 1 && op[i + 1] != "+" && op[i + 1] != "-")
            {
                first.push_back(stoi(op[i++]));
                second.push_back(op[i++]);
            }
            first.push_back(stoi(op[i++]));
            sort(first.begin(), first.end());
            for (size_t j = 0; j < second.size(); j++)
            {
                result.push_back(to_string(first[j]));
                result.push_back(second[j]);
            }
            result.push_back(to_string(first.back()));
            result.push_back(op[i++]);
            first.clear();
            second.clear();
            while (i < 2 * N_number - 1 && op[i + 1] != "*" && op[i + 1] != "/")
            {
                first.push_back(stoi(op[i++]));
                second.push_back(op[i++]);
            }
            sort(first.begin(), first.end());
            for (size_t j = 0; j < first.size(); j++)
            {
                result.push_back(to_string(first[j]));
                result.push_back(second[j]);
            }
            first.clear();
            second.clear();
        }
    }
    for (string s : result)
    {
        cout << s << " ";
    }
}