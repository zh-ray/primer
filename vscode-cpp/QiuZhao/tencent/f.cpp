#include <iostream>
using namespace std;
int dist[400][400];

int n, k;

int sum()
{
    int res = 0;
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            res += dist[i][j];
    return res;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &dist[i][j]);
        }
    }

    scanf("%d", &k);
    int fm, to, d;

    for (int i = 0; i < k; i++)
    {
        scanf("%d%d%d", &fm, &to, &d);

        for (int a = 1; a <= n; a++)
        {
            for (int b = 1; b <= n; b++)
            { // WA
                if (d + dist[a][fm] + dist[to][b] < dist[a][b])
                {
                    dist[a][b] = d + dist[a][fm] + dist[to][b];
                    dist[b][a] = dist[a][b]; // WA
                }
            }
        }
        int res = sum();
        cout << res << endl;
    }

    return 0;
}