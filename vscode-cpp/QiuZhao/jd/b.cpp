#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> nums(5, vector<int>(5));
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            cin >> nums[i][j];
        }
    }
    while (true)
    {
        vector<pair<int, int>> del;
        for (size_t i = 0; i < 5; i++)
        {
            for (size_t j = 0; j < 5; j++)
            {
                if (nums[i][j] == 0)
                {
                    continue;
                }
                int x0 = i, x1 = i, y0 = j, y1 = j;
                while (x0 >= 0 && x0 > i-3 && nums[x0][j]==nums[i][j])
                {
                    --x0;
                }
                while (x1 < 5 && x1 < i+3 && nums[x1][j]==nums[i][j])
                {
                    ++x1;
                }
                while (y0 >= 0 && y0 > j-3 && nums[i][y0]==nums[i][j])
                {
                    --y0;
                }
                while (y1 < 5 && y1 < i+3 && nums[i][y1]==nums[i][j])
                {
                    ++y1;
                }
                if (x1-x0 > 3 || y1-y0 > 3)
                {
                    del.push_back({i, j});
                }
            }

        }
        if (del.empty())
        {
            break;
        }


    }

}