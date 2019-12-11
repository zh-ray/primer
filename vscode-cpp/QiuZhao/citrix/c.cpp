#include <iostream>
#include <vector>
using namespace std;
int maxRes = -1;
void helper1(vector<vector<int>> &board, int times, int start_x, int start_y, int res)
{
    res += board[start_x][start_y];
    times--;
    if (times == 0)
    {
        maxRes = (maxRes > res ? maxRes : res);
        return;
    }
    if (start_y - 1 >= 0)
    {
        helper1(board, times, start_x + 1, start_y - 1, res);
    }
    helper1(board, times, start_x + 1, start_y, res);
    if (start_y + 1 < board[0].size())
    {
        helper1(board, times, start_x + 1, start_y + 1, res);
    }
    return;
}
void helper2(vector<vector<int>> &board, int times, int start_x, int start_y, int res)
{
    res += board[start_x][start_y];
    times--;
    if (times == 0)
    {
        maxRes = (maxRes > res ? maxRes : res);
        return;
    }
    if (start_y - 1 >= 0)
    {
        helper2(board, times, start_x - 1, start_y - 1, res);
    }
    helper2(board, times, start_x - 1, start_y, res);
    if (start_y + 1 < board[0].size())
    {
        helper2(board, times, start_x - 1, start_y + 1, res);
    }
    return;
}

int maxPathSum(vector<vector<int>> board, int p, int q)
{
    int times = board.size();
    helper1(board, times, 0, p, 0);
    helper2(board, times, board.size() - 1, q, 0);
    return maxRes;
}
int main()
{
    vector<vector<int>> board{{9, 4, 7, 1}, {2, 1, 3, 3}, {1, 4, 2, 4}};
    cout << maxPathSum(board, 2, 1);
}