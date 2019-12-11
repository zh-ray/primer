#include <iostream>
#include <vector>
using namespace std;
// 返回下标
int cal(int len, int m, int start)
{
    int alive = len;
    int curIndex = start;
    int preIndex;
    if (curIndex == 0)
    {
        preIndex = len - 1;
    }
    else
    {
        preIndex = curIndex - 1;
    }

    vector<int> circle(len);
    int index;
    for (index = 0; index < len; index++)
    {
        circle[index] = (index + 1) % len;
    }
    while (alive > 1)
    {
        int num = m % alive - 1;
        for (index = 0; index < (num == -1 ? alive - 1 : num); index++)
        {
            preIndex = curIndex;
            curIndex = circle[curIndex];
        }
        alive--;
        circle[preIndex] = circle[curIndex];
        curIndex = circle[curIndex];
    }
    return curIndex;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> hulus(n);
    for (int i = 0; i < n; i++)
    {
        cin >> hulus[i];
    }
    double total = 0.0;
    vector<double> weights(n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        total += temp;
        weights[i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        weights[i] = weights[i] / total;
    }
    vector<int> res(n);
    for (int i = 0; i < n; i++)
    {
        if (hulus[cal(n, m, i)] == 1)
        {
            res[i] = 1;
        }
    }
    double result = 0.0;
    for (int i = 0; i < n; i++)
    {
        result += weights[i] * res[i];
    }
    printf("%.5f", result);
    return 0;
}