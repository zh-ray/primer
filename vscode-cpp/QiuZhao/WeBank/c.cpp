#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> map(n, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        map[x][y] = 1;
        map[y][x] = 1;
    }
    int source, destination;
    cin >> source >> destination;

}