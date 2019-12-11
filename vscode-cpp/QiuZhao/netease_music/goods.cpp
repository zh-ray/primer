#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        int m, n, k;
        cin >> n >> m >> k;
        int(*others)[2] = new int[k][2];
        for (size_t j = 0; j < k; j++)
        {
            cin >> others[j][0] >> others[j][1];
        }
        int good_x, good_y;
        cin >> good_x >> good_y;

        bool flag = false;
        for (size_t x = good_x; x < n; x++)
        {
            for (size_t y = good_y; y < m; y++)
            {
                for (size_t j = 0; j < k; j++)
                {
                    if (!(others[j][0] >= x - good_x && others[j][0] <= x && others[j][1] >= y - good_y && others[j][1] <= y))
                    {
                        flag = true;
                        cout << "YES";
                        break;
                    }
                }
                if (flag)
                {
                    break;
                }
            }
            if (flag)
            {
                break;
            }
        }
        if(!flag)
        {
            cout << "NO";
        }
        cout << endl;

        delete[] others;
    }
}