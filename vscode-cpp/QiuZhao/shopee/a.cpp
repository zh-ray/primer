#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    long temp = 0;
    int flag = (a >= 0 ? 1 : -1);
    temp = (long)a * flag;
    long a_re = 0;

    while (temp)
    {
        a_re = a_re * 10 + (temp % 10);
        temp /= 10;
    }
    if (a_re < -2147483648 || a_re >= 2147483647)
    {
        cout << 0 << endl;
        return 0;
    }

    cout << flag * (int)a_re;

    return 0;
}