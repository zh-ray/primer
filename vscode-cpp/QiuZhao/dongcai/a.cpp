#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string str1;
    string str2;
    cin >> str1 >> str2;
    vector<string> num1;
    vector<string> num2;
    string temp;
    for (char s : str1)
    {
        if (s != ',')
        {
            temp.push_back(s);
        }
        else
        {
            num1.push_back(temp);
            temp.clear();
        }
    }
    num1.push_back(temp);
    temp.clear();
    for (char s : str2)
    {
        if (s != ',')
        {
            temp.push_back(s);
        }
        else
        {
            num2.push_back(temp);
            temp.clear();
        }
    }
    num2.push_back(temp);
    temp.clear();

    vector<string> result;
    for (string s : num2)
    {
        auto pos = find(num1.begin(), num1.end(), s);
        if (pos < num1.end() - 1)
        {
            for (auto i = pos + 1; i != num1.end(); i++)
            {
                result.push_back(*i);
            }
        }
        if (pos != num1.end())
        {
            num1.erase(pos);
        }
    }
    for (string s : result)
    {
        cout << s + ",";
    }
    cout << endl;

    return 0;
}