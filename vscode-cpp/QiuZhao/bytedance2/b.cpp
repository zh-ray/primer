

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <map>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <vector>
using namespace std;
#define LL long long
const int maxn = 200 + 5;

struct Node
{
    int v[3], dist;
    bool operator<(const Node &rhs) const
    {
        return dist > rhs.dist;
    }
};

int vis[maxn][maxn], cap[3], ans[maxn];

void update_ans(const Node &u)
{
    for (int i = 0; i < 3; i++)
    {
        int d = u.v[i];
        if (ans[d] < 0 || u.dist < ans[d])
            ans[d] = u.dist;
    }
}

void solve(int a, int b, int c, int d)
{
    cap[0] = a;
    cap[1] = b;
    cap[2] = c;
    memset(vis, 0, sizeof(vis));
    memset(ans, -1, sizeof(ans));
    priority_queue<Node> q;

    Node start;
    start.dist = 0, start.v[0] = 0, start.v[1] = 0, start.v[2] = c;
    q.push(start);

    vis[0][0] = 1;
    while (!q.empty())
    {
        Node u = q.top();
        q.pop();
        update_ans(u);
        if (ans[d] >= 0)
            break;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                if (i != j)
                { //从i向j倒水
                    if (u.v[i] == 0 || u.v[j] == cap[j])
                        continue;
                    int amount = min(cap[j], u.v[i] + u.v[j]) - u.v[j];
                    Node u2;
                    memcpy(&u2, &u, sizeof(u));
                    u2.dist += amount;
                    u2.v[i] -= amount;
                    u2.v[j] += amount;
                    if (!vis[u2.v[0]][u2.v[1]])
                    {
                        vis[u2.v[0]][u2.v[1]] = 1;
                        q.push(u2);
                    }
                }
    }
    while (d >= 0)
    {
        if (ans[d] >= 0)
        {
            printf("%d %d\n", ans[d], d);
            return;
        }
        d--;
    }
}

int main()
{
    int T, a, b, c, d;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d%d%d", &a, &b, &c, &d);
        solve(a, b, c, d);
    }
    return 0;
}