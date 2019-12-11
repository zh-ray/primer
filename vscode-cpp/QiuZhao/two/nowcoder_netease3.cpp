#include <iostream>
#include <queue>
#include <string>

using namespace std;
int state[10][10][10][10]; //四维数组表示人和箱子的位置状态

struct q
{
    int px, py, bx, by;
    q(int x, int y, int bx, int by) : px(x), py(y), bx(bx), by(by) {} //初始化列表
};
int moves[4][2] = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}; //四个方向
char map[10][10];                                     //地图为啥是10X10
int cpx, cpy, cbx, cby, ex, ey, n, m;                 //分别表示当前人，盒子，终点的位置，以及地图尺寸

bool bound(int x, int y) //边界检查
{
    if (x < 0 || y < 0 || x >= n || y >= m || map[x][y] == '#')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int bfs()
{
    state[cpx][cpy][cbx][cby] = 1; //当前起始状态位置步数设为1
    q temp(cpx, cpy, cbx, cby);
    queue<q> que;      //状态队列
    que.push(temp);    //初始状态入列
    while (que.size()) //只要队列不为空就一直寻找
    {
        temp = que.front(); //获取首元素
        que.pop();          //首元素弹出
        if (temp.bx == ex && temp.by == ey)
        {
            return state[temp.px][temp.py][temp.bx][temp.by] - 1; //如果箱子在终点，结束，返回步数
        }
        for (int i = 0; i < 4; ++i) //四个方向开始搜索
        {
            //先更新人的位置
            int px = temp.px + moves[i][0];
            int py = temp.py + moves[i][1];
            if (bound(px, py))
            {
                continue; //如果这个位置非法，探寻其他位置
            }
            if (px == temp.bx && py == temp.by) //如果此时人与箱子的位置重合，则人应当推动箱子
            {
                if (bound(temp.bx + moves[i][0], temp.by + moves[i][1]))
                {
                    continue; //如果箱子的移动位置非法，则探寻其他方向
                }
                state[px][py][temp.bx + moves[i][0]][temp.by + moves[i][1]] = state[temp.px][temp.py][temp.bx][temp.by] + 1; //箱子推动，则人和箱子位置改变，记录新状态
                que.push(q(px, py, temp.bx + moves[i][0], temp.by + moves[i][1]));                                           //新状态入栈
            }
            else //人没有推动箱子
            {
                if (state[px][py][temp.bx][temp.by]) //如果移动后的状态出现过，则重新搜索方向
                {
                    continue;
                }
                state[px][py][temp.bx][temp.by] = state[temp.px][temp.py][temp.bx][temp.by] + 1; //没有走过的路就尝试走一走
                que.push(q(px, py, temp.bx, temp.by));                                           //更新状态
            }
        }
    }
    return -1; //如果所有位置都试过，则表示不存在
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        scanf("%s", map[i]); //scanf
    }

    for (size_t i = 0; i < n; ++i)
    {
        for (size_t j = 0; j < m; ++j)
        {
            if (map[i][j] == '*')
            {
                cbx = i;
                cby = j;
            }
            else if (map[i][j] == 'X')
            {
                cpx = i;
                cpy = j;
            }
            else if (map[i][j] == '@')
            {
                ex = i;
                ey = j;
            }

        }

    }
    cout << bfs() << endl;
    return 0;
}