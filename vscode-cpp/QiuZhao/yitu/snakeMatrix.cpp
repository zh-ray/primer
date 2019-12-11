#include <iostream>
#include <vector>
using namespace std;
void snakeMatrix(vector<vector<int>> &res, int N, int M)
{
    int x = 1, y = 1;
    int direction = 0; // 0代表↙，1代表↗
    for (int i = 1; i <= N * M; i++)
    {
        res[x - 1][y - 1] = i;
        if (direction)
        {
            // 边缘时改变方向
            if (x == 1 || y + 1 > M)
            {
                direction = 0;
                // 到达最右边
                if (y + 1 > M)
                {
                    x++;
                }
                // 到达最上边
                else
                {
                    y++;
                }
            }
            else
            {
                x--;
                y++;
            }
        }
        else
        {
            if (y == 1 || x + 1 > N)
            {
                direction = 1;
                if (x + 1 > N)
                {
                    y++;
                }
                else
                {
                    x++;
                }
            }
            else
            {
                x++;
                y--;
            }
        }
    }
}
int main()
{
    int N, M;
    cin >> N >> M;
    vector<vector<int>> res(N, vector<int>(M));
    snakeMatrix(res, N, M);
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}