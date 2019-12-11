#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct rectangle
{
    int W;      // 宽
    int H;      // 高
    int WH;     // 面积
    double W_H; // 宽高比
};
bool compare(rectangle a, rectangle b)
{
    if (a.WH > b.WH)
    {
        return false;
    }
    else if (a.WH < b.WH)
    {
        return true;
    }
    else if (a.W_H > b.W_H)
    {
        return true;
    }
    else if (a.W_H < b.W_H)
    {
        return false;
    }
    else if (a.W < b.W)
    {
        return true;
    }
    else
    {
        return false;
    }
}
double min(int a, int b)
{
    double ab = a * 1.0 / b;
    double ba = b * 1.0 / a;
    return ab > ba ? ba : ab;
}
int main()
{
    int N;
    cin >> N;
    vector<rectangle> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i].W >> a[i].H;
        a[i].WH = a[i].W * a[i].H;
        a[i].W_H = min(a[i].W, a[i].H);
    }
    sort(a.begin(), a.end(), compare);
    for (auto i : a)
    {
        cout << i.W << " " << i.H << " ";
    }
    return 0;
}