#include <algorithm>
#include <iostream>
#include <limits>
#include <math.h>

using namespace std;

bool isPrime(long long number)
{
    for (size_t i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    long long(*pairs)[2] = new long long[n][2];
    long long minNum = numeric_limits<long long>::max();
    for (size_t i = 0; i < n; i++)
    {
        cin >> pairs[i][0] >> pairs[i][1];
        minNum = min(minNum, max(pairs[i][0], pairs[i][1])); // minNum取为每个数对最大值的最小值
    }

    int j;
    for (size_t i = minNum; i > 1; --i)
    {
        for (j = 0; j < n; j++)
        {
            if (pairs[j][0] % i != 0 && pairs[j][1] % i != 0)
            {
                break;
            }
        }
        if (j == n && isPrime(i))
        {
            cout << i << endl;
            delete[] pairs;
            return 0;
        }
    }
    cout << -1 << endl;

    delete[] pairs;
    return 0;
}