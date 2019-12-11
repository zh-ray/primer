#include <iostream>
#include <vector>
using namespace std;
string res;
void fun(string input)
{
    if (input.size() == 0)
    {
        cout << res << endl;
        return;
    }

    res.push_back(((input[0] - '0') - 1) + 'A');
    string one = input.substr(1);
    fun(one);
    res.pop_back();
    if (input.size() >= 2)
    {
        int temp = (input[0] - '0') * 10 + (input[1] - '0');
        if (temp <= 26)
        {
            res.push_back(temp - 1 + 'A');
            string two = input.substr(2);
            fun(two);
            res.pop_back();
        }
    }
    return;
}
int main()
{
    string input;
    cin >> input;
    fun(input);
    return 0;
}