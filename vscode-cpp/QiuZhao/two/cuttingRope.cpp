#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int length;
    while (cin >> length)
    {
        if (length < 2)
        {
            cout << 0 << endl;
            continue;
        }
        if (length == 2)
        {
            cout << 1 << endl;
            continue;
        }
        if (length == 3)
        {
            cout << 2 << endl;
            continue;
        }

        int *products = new int[length + 1];
        products[1] = 1;
        products[2] = 2;
        products[3] = 3;

        int max = numeric_limits<int>::min();

        for (size_t i = 4; i < length + 1; i++)
        {
            max = numeric_limits<int>::min();
            for (size_t j = 1; j <= i / 2; j++)
            {
                int product = products[j] * products[i - j];
                max = max < product ? product : max;
            }
            products[i] = max;
        }

        cout << products[length] << endl;
        delete[] products;
    }

    return 0;
}