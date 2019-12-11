#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<vector<int>> maps;
int map[1001][1001];
int vis[1001][1001];
int n, m;
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
int x11, y11, x22, y22, flag;
struct point
{
    int x;
    int y;
} tmp1, tmp2;
int main()
{
    queue<point> q;
    char c;
    while ((c = getchar()) != EOF)
    {
        while (!q.empty())
            q.pop();
        flag = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> map[i][j];
                if (map[i][j] == 2) //记录起始结束的点
                {
                    x11 = i;
                    y11 = j;
                }
                if (map[i][j] == 3)
                {
                    x22 = i;
                    y22 = j;
                }
            }
        }
        tmp1.x = x11, tmp1.y = y11; //头点入队并标记
        q.push(tmp1);
        vis[tmp1.x][tmp1.y] = 1;
        while (!q.empty())
        {
            tmp1 = q.front();
            q.pop();
            if (tmp1.x == x22 && tmp1.y == y22) //如果到达终点，记录的步数一定是最小的！
            {
                flag = 1;
                break;
            }
            for (int i = 0; i < 4; i++) //四个方向走
            {
                tmp2.x = tmp1.x + dx[i];
                tmp2.y = tmp1.y + dy[i];
                if (tmp2.x >= 1 && tmp2.x <= n && tmp2.y >= 1 && tmp2.y <= n && vis[tmp2.x][tmp2.y] == 0 && map[tmp2.x][tmp2.y] != '1')
                {
                    vis[tmp2.x][tmp2.y] = vis[tmp1.x][tmp1.y] + 1; //如果符合要求该点步数是上一点步数加1，加入队伍
                    q.push(tmp2);
                }
            }
        }
        if (flag)
            cout << vis[x22][y22] - 1 << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}