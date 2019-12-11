#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string expression;
    while (cin >> expression && expression != "END")
    {
        stack<int> nums;
        stack<char> op;
        for (size_t i = 0; i < expression.size(); ++i)
        {
            int temp = 0;
            bool flag = false;
            while (i < expression.size() && isdigit(expression[i]))
            {
                flag = true;
                temp = 10 * temp + (expression[i] - '0');
                i++;
            }
            if (flag)
            {
                nums.push(temp);
            }
            while (op.size() && expression[i] != '*')
            {
                int b = nums.top();
                nums.pop();
                int a = nums.top();
                nums.pop();
                char operation = op.top();
                op.pop();
                if (operation == '+')
                {
                    nums.push(a + b);
                }
                else if (operation == '-')
                {
                    nums.push(a - b);
                }
                else
                {
                    nums.push(a * b);
                }
            }
            op.push(expression[i]);
        }
        cout << nums.top() << endl;
        nums.pop();
        expression.clear();
    }
    return 0;
}