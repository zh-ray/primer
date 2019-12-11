#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    vector<string> tokens;
    string c;
    while (cin >> c)
    {
        tokens.push_back(c);
    }

    stack<int> num;
    for (string s : tokens)
    {
        if (s == "+" || s == "-" || s == "*" || s == "/")
        {
            int a = num.top();
            num.pop();
            int b = num.top();
            num.pop();
            if (s == "+")
            {
                num.push(a + b);
            }
            else if (s == "-")
            {
                num.push(b - a);
            }
            else if (s == "*")
            {
                num.push(a * b);
            }
            else
            {
                num.push(b / a);
            }
        }
        else
        {
            num.push(stoi(s));
        }
    }
    cout << num.top() << endl;
    return 0;
}