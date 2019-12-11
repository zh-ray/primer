#include <algorithm>
#include <iostream>
#include <limits>
#include <math.h>
#include <vector>

using namespace std;

double distance(int *pointA, int *pointB)
{
    return sqrt(pow(pointA[0] - pointB[0], 2) + pow(pointA[1] - pointB[1], 2));
}

bool is_square(int *point1, int *point2, int *point3, int *point4)
{
    vector<double> edges;
    double len1 = distance(point1, point2);
    edges.push_back(len1);
    double len2 = distance(point1, point3);
    edges.push_back(len2);
    double len3 = distance(point1, point4);
    edges.push_back(len3);
    double len4 = distance(point2, point3);
    edges.push_back(len4);
    double len5 = distance(point2, point4);
    edges.push_back(len5);
    double len6 = distance(point3, point4);
    edges.push_back(len6);
    sort(edges.begin(), edges.end());
    if (edges[0] == edges[1] && edges[1] == edges[2] && edges[2] == edges[3] && edges[4] > edges[3] && edges[4] == edges[5])
    {
        return true;
    }
    else
    {
        return false;
    }
}

int *point_changed(int *point, int count) //(x,y)绕(p,q)逆时针90°变为(q+p-y,q-p+x)
{
    int *temp = new int[4]{point[2] + point[3] - point[1], point[3] - point[2] + point[0], point[2], point[3]};
    if (count == 0)
    {
        return point;
    }
    else
    {
        return point_changed(temp, --count);
    }
}

int main()
{
    int n;

    cin >> n;
    int(*points)[4] = new int[4 * n][4];

    for (size_t i = 0; i < 4 * n; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            cin >> points[i][j];
        }
    }
    for (size_t j = 0; j < 4 * n; j++)
    {
        if (j % 4 != 0)
        {
            continue;
        }
        else
        {

            int minCounts = numeric_limits<int>::max();
            for (size_t i = 0; i < 4; i++)
            {
                for (size_t ii = 0; ii < 4; ii++)
                {
                    for (size_t iii = 0; iii < 4; iii++)
                    {
                        for (size_t iiii = 0; iiii < 4; iiii++)
                        {
                            if (is_square(point_changed(points[j], i), point_changed(points[j + 1], ii), point_changed(points[j + 2], iii), point_changed(points[j + 3], iiii)))
                            {
                                minCounts = minCounts > (i + ii + iii + iiii) ? (i + ii + iii + iiii) : minCounts;
                            }
                        }
                    }
                }
            }
            if (minCounts == numeric_limits<int>::max())
            {
                minCounts = -1;
            }

            cout << minCounts << endl;
        }
    }

    delete[] points;
}