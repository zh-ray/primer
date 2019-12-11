#include <iostream>
#include <vector>
using namespace std;
int res = 0;
void fun(string input)
{
    if (input.size() == 0)
    {
        res++;
        return;
    }
    string one = input.substr(1);
    fun(one);
    if (input.size() >= 2)
    {
        int temp = (input[0] - '0') * 10 + (input[1] - '0');
        if (temp <= 26)
        {
            string two = input.substr(2);
            fun(two);
        }
    }
    return;
}
int main()
{
    string input;
    cin >> input;
    fun(input);
    cout << res << endl;
    return 0;
}