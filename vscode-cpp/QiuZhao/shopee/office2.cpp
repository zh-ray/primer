#include <iostream>

using namespace std;
int main()
{
    int x, y, n;
    cin >> x >> y >> n;
    long **office = new long *[x + 1];
    for (size_t i = 0; i <= x; i++)
    {
        office[i] = new long[y + 1]();
    }

    for (size_t i = 0; i < n; i++)
    {
        int x_boss, y_boss;
        cin >> x_boss >> y_boss;
        office[x_boss][y_boss] = -1;
    }

    for (size_t i = 0; i <= x; i++)
    {
        office[i][0] = 1;
    }
    for (size_t i = 0; i <= y; i++)
    {
        office[0][i] = 1;
    }

    for (size_t i = 1; i <= x; i++)
    {
        for (size_t j = 1; j <= y; j++)
        {
            if (office[i][j] == -1)
            {
                continue;
            }

            if (office[i - 1][j] != -1)
            {
                office[i][j] += office[i - 1][j];
            }
            if (office[i][j - 1] != -1)
            {
                office[i][j] += office[i][j - 1];
            }
        }
    }

    cout << office[x][y] << endl;
    delete[] office;

    return 0;
}