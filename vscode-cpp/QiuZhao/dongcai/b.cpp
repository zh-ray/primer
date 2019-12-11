#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string str1;
    cin >> str1;
    vector<int> num1;
    string temp;
    stringstream ss;
    for (char s : str1)
    {
        if (s != ',')
        {
            temp.push_back(s);
        }
        else
        {

            num1.push_back(stoi(temp));
            temp.clear();
        }
    }
    num1.push_back(stoi(temp));
    temp.clear();

    if (num1.size() == 0)
    {
        cout << -1 << endl;
        return 0;
    }
    if (num1.size() == 1)
    {
        cout << num1[0] << endl;
        return 0;
    }
    if (num1.size() == 1)
    {
        cout << max(num1[0], num1[1]) << endl;
        return 0;
    }
    if (num1.size() == 1)
    {
        cout << max(max(num1[0], num1[1]), num1[2]) << endl;
        return 0;
    }
}