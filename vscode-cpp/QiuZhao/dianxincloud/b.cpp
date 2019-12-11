#include <iostream>
#include <map>
using namespace std;
string intToRoman(int number)
{
    int wan = number / 10000;
    int qian = number % 10000 / 1000;
    int bai = number % 1000 / 100;
    int shi = number % 100 / 10;
    int ge = number % 10;
    string res;
    if (wan == 1)
    {
        res = "MMMMMMMMMM";
        return res;
    }
    if (qian != 0)
    {
        while (qian--)
        {
            res += "M";
        }
    }
    if (bai >= 5)
    {
        res += "D";
        int times = bai - 5;
        while (times--)
        {
            res += "C";
        }
    }
    else if (bai > 0)
    {
        while (bai--)
        {
            res += "C";
        }
    }
    if (shi >= 5)
    {
        res += "L";
        int times = shi - 5;
        while (times--)
        {
            res += "X";
        }
    }
    else if (shi > 0)
    {
        while (shi--)
        {
            res += "X";
        }
    }
    if (ge >= 5)
    {
        res += "V";
        int times = ge - 5;
        while (times--)
        {
            res += "I";
        }
    }
    else if (ge > 0)
    {
        while (ge--)
        {
            res += "I";
        }
    }
    return res;
}
int main()
{
    int number;
    cin >> number;
    cout << intToRoman(number) << endl;
    return 0;
}