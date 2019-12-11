#include <iostream>

using namespace std;

int main()
{
    int n, m;
    long long k;
    cin >> n >> m >> k;
    string result;
    while (n && m)
    {
        long long calculate = 1;
        for (size_t i = 1; i < n; ++i)
        {
            calculate *= (n + m - i);
            calculate /= i;
            if (k < calculate)
            {
                break;
            }
        }
        if (k <= calculate)
        {
            result.push_back('a');
            --n;
        }
        else
        {
            result.push_back('z');
            k -= calculate;
            --m;
        }

    }
    if (k != 1)
    {
        cout << -1 << endl;
    }
    else
    {
        while (n--)
        {
            result.push_back('a');
        }
        while (m--)
        {
            result.push_back('z');
        }

        cout << result << endl;
    }


}