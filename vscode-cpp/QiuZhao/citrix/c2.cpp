#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int max(int a, int b, int c)
{
    return (a > b ? a : b) > c ? (a > b ? a : b) : c;
}
int maxPathSum(vector<vector<int>> board, int p, int q)
{
    int rows = board.size();
    int cols = board[0].size();
    vector<vector<int>> dpdown(rows, vector<int>(cols));
    vector<vector<int>> dpup(rows, vector<int>(cols));
    for (int i = 0; i < cols; i++)
    {
        dpdown[rows - 1][i] = board[rows - 1][i];
    }
    for (int i = 0; i < cols; i++)
    {
        dpup[0][i] = board[0][i];
    }
    for (int i = rows - 2; i >= 0; i--)
    {
        dpdown[i][0] = board[i][0] + max(dpdown[i + 1][0], dpdown[i + 1][1]);
        dpdown[i][cols - 1] = board[i][cols - 1] + max(dpdown[i + 1][cols - 1], dpdown[i + 1][cols - 2]);

        for (int j = 1; j < cols - 1; j++)
        {
            dpdown[i][j] = board[i][j] + max(dpdown[i + 1][j - 1], dpdown[i + 1][j], dpdown[i + 1][j + 1]);
        }
    }

    for (int i = 1; i < rows; i++)
    {
        dpdown[i][0] = board[i][0] + max(dpdown[i - 1][0], dpdown[i - 1][1]);
        dpdown[i][cols - 1] = board[i][cols - 1] + max(dpdown[i - 1][cols - 1], dpdown[i - 1][cols - 2]);

        for (int j = 1; j < cols - 1; j++)
        {
            dpdown[i][j] = board[i][j] + max(dpdown[i - 1][j - 1], dpdown[i - 1][j], dpdown[i - 1][j + 1]);
        }
    }

    return max(dpdown[0][p], dpup[rows - 1][q]);
}
int main()
{
    vector<vector<int>> board{{9, 4, 7, 1}, {2, 1, 3, 3}, {1, 4, 2, 4}};
    cout << maxPathSum(board, 2, 1);
}