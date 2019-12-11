#include <iostream>
#include <limits>
#include <numeric>
#include <stack>
#include <vector>

using namespace std;

/*请完成下面这个函数，实现题目要求的功能
当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
******************************开始写代码******************************/
string resolve(string expr)
{
    stack<int> brackers;
    string ans = "";
    int left;
    vector<int> match(expr.size());
    for (int i = 0; i < expr.size(); i++)
    {
        if (expr[i] == '(')
        {
            brackers.push(i);
        }
        else if (expr[i] == ')')
        {
            if (brackers.empty())
            {
                return "";
            }
            left = brackers.top();
            brackers.pop();
            match[left] = i;
            match[i] = left;
        }
    }
    if (!brackers.empty())
    {
        return "";
    }
    int pos = 0, len = 1;
    while (pos != expr.size())
    {
        if (expr[pos] == '(' || expr[pos] == ')')
        {
            pos = match[pos];
            len = -len;
            pos += len;
        }
        else
        {
            ans += expr[pos];
            pos += len;
        }
    }
    return ans;
}
/******************************结束写代码******************************/

int main()
{
    string res;

    string _expr;
    getline(cin, _expr);

    res = resolve(_expr);
    cout << res << endl;

    return 0;
}
