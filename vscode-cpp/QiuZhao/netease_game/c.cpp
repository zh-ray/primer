#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for (size_t i = 0; i < T; i++)
    {
        int m, t, m1, t1, m2, t2;
        cin >> m >> t >> m1 >> t1 >> m2 >> t2;

        int water = 0;
        for (size_t j = 1; j <= t; j++)
        {
            vector<int> v(2, 0);
            // 第j分钟给水管状态
            if (((j - 1) / t1) % 2 == 0)
            {
                // 给水管开
                v[0] = 1;
            }

            if (((j - 1) / t2) % 2 == 0)
            {
                // 排水管开
                v[1] = 1;
            }
            water += (m1 * v[0] - m2 * v[1]);
            if (water < 0)
            {
                water = 0;
            }
            if (water > m)
            {
                water = m;
            }
        }
        cout << water << endl;
    }
}