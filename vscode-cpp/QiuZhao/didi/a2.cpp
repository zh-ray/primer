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
            if (i < 2 * N_number - 2 && (op[i+1] == "+" || op[i+1] == "-"))
            {

            }
        }
    }
}