#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;
string res;
void reverseString(string &str)
{
    int i = 0;
    int j = str.size() - 1;
    while (i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
void reverseWords(stack<char> input)
{
    string temp;
    if (input.empty())
    {
        return;
    }
    while (input.top() != '.' && input.top() != '_')
    {
        temp.push_back(input.top());
        input.pop();
        if (input.empty())
        {
            break;
        }
    }
    if (input.empty())
    {
        reverseString(temp);
        res += temp;
    }
    else if (input.top() == '.')
    {
        reverseString(temp);
        res += temp + ".";
        input.pop();
        reverseWords(input);
    }
    else if (input.top() == '_')
    {
        res += temp + "_";
        input.pop();
        reverseWords(input);
    }
    return;
}
int main()
{
    char c;
    stack<char> input;
    while ((c = getchar()) != '\n')
    {
        input.push(c);
    }
    reverseWords(input);
    cout << res << endl;
    return 0;
}