#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int input = n / 2;
    int a[1001][1001], b[1001];
    int i, j, len, carry, temp;
    a[1][0] = b[1] = 1;
    len = 1;
    for (i = 2; i <= input; i++)
    {
        for (j = 0; j < len; j++)
        {
            a[i][j] = a[i - 1][j] * (4 * (i - 1) + 2);
        }
        carry = 0;
        for (j = 0; j < len; j++)
        {
            temp = a[i][j] + carry;
            a[i][j] = temp % 10;
            carry = temp / 10;
        }
        while (carry)
        {
            a[i][len++] = carry % 10;
            carry /= 10;
        }
        carry = 0;
        for (j = len - 1; j >= 0; j--)
        {
            temp = carry * 10 + a[i][j];
            a[i][j] = temp / (i + 1);
            carry = temp % (i + 1);
        }
        while (!a[i][len - 1])
        {
            len--;
        }
        b[i] = len;
    }
}