#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

// "---------------------------------------------------------------------------------------"
int cal(const string &);
// "---------------------------------------------------------------------------------------"
vector<string> pre_cal(const string &);
// "---------------------------------------------------------------------------------------"
int getPriority(const string &);
// "---------------------------------------------------------------------------------------"
int result(int &, int &, const string &);
// "---------------------------------------------------------------------------------------"
int main(int argc, char *argv[])
{
    cout << "----------------------------------------------" << endl;
    string expression("2 * (4 + 5 * (6 - (-1))) / 2 + 6 - (5 - 3) * 2");
    // string expression("4 + 5 * (6 - (-1))");
    vector<string> temp = pre_cal(expression);
    for (string s : temp)
    {
        cout << s << " ";
    }
    cout << endl;
    cout << 2 * (4 + 5 * (6 - (-1))) / 2 + 6 - (5 - 3) * 2 << " | " << cal(expression) << endl;
    cout << "----------------------------------------------" << endl;
    return 0;
}
// "---------------------------------------------------------------------------------------"
vector<string> pre_cal(const string &str)
{
    vector<string> res;
    string::size_type i = 0;
    while (i < str.size())
    {
        switch (str[i])
        {
        case '(':
        case ')':
        case '+':
        case '*':
        case '/':
            res.push_back(str.substr(i, 1));
            break;
        case '-':
            if (isdigit(str[i + 1]))
            {
                res.push_back("#");
            }
            else
            {
                res.push_back("-");
            }
            break;
        case ' ':
            break;
        default:
            string digit;
            while (i < str.size() && isdigit(str[i]))
            {
                digit.push_back(str[i]);
                i++;
            }
            i--;
            res.push_back(digit);
        }
        i++;
    }
    return res;
}
// "---------------------------------------------------------------------------------------"
int getPriority(const string &op)
{
    if ("#" == op)
    {
        return 3;
    }
    else if ("*" == op || "/" == op)
    {
        return 2;
    }
    else if ("+" == op || "-" == op)
    {
        return 1;
    }
    return 0;
}
// "---------------------------------------------------------------------------------------"
int result(int &a, int &b, const string &op)
{
    if (op == "+")
    {
        return a + b;
    }
    else if (op == "-")
    {
        return a - b;
    }
    else if (op == "*")
    {
        return a * b;
    }
    else
    {
        return a / b;
    }
}
// "---------------------------------------------------------------------------------------"
// (a * (b + c) / d) + e - f * g
int cal(const string &str)
{
    vector<string> expression = pre_cal(str);

    stack<int> num_stack;
    stack<string> op_stack;

    for (string s : expression)
    {
        if (s.find_first_of("0123456789") != string::npos)
        {
            num_stack.push(stoi(s));
        }
        else if (s == "(")
        {
            op_stack.push(s);
        }
        else if (s != ")")
        {
            while (op_stack.size() && getPriority(s) <= getPriority(op_stack.top()))
            {
                if (op_stack.top() == "#")
                {
                    num_stack.top() *= -1;
                }
                else
                {
                    int a = num_stack.top();
                    num_stack.pop();
                    int b = num_stack.top();
                    num_stack.pop();
                    num_stack.push(result(b, a, op_stack.top()));
                }
                op_stack.pop();
            }
            op_stack.push(s);
        }
        else
        {
            while (op_stack.top() != "(")
            {
                if (op_stack.top() == "#")
                {
                    num_stack.top() *= -1;
                }
                else
                {
                    int a = num_stack.top();
                    num_stack.pop();
                    int b = num_stack.top();
                    num_stack.pop();
                    num_stack.push(result(b, a, op_stack.top()));
                }
                op_stack.pop();
            }
            op_stack.pop();
        }
    }
    while (!op_stack.empty())
    {
        int a = num_stack.top();
        num_stack.pop();
        int b = num_stack.top();
        num_stack.pop();
        num_stack.push(result(b, a, op_stack.top()));
        op_stack.pop();
    }
    return num_stack.top();
}