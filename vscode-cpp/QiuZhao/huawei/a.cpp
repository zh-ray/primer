#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int p;
    cin >> p;
    int count = 0;
    for (size_t i = (sqrt(2.0) - 1) * p; i < p; i++)
    {
        for (size_t j = 1; j < (2 - sqrt(2.0)) / 2 * p; j++)
        {
            if (i * i == j * j + (p - i - j) * (p - i - j))
            {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}