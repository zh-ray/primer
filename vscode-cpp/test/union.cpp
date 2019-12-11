#include <iostream>
#include <vector>
using namespace std;
vector<int> pre(1001); // 存储某位大侠的上一级，若值和下标相等则为掌门（或者值小于0，绝对值为该门派中的人数）

int unionsearch(int root) // 从该点出发找到掌门
{
    int son, temp;
    son = root;
    while (root != pre[root]) // 若我的上级不是掌门，则更新我的上级
    {
        root = pre[root];
    }
    // 路径压缩，将门派中的所有人的上级均换成掌门
    while (son != root)
    {
        temp = pre[son];
        pre[son] = root;
        son = temp;
    }
    return root; // 这就是掌门
}

int main()
{
    int num;  //江湖总共有num个大侠
    int road; //有road对大侠之间有门派关系
    cin >> num >> road;
    int total = num; // 江湖上初始化有total个门派
    for (int i = 0; i < num; i++)
    {
        pre[i] = i; // 初始化每位大侠都自成一派
    }
    while (road--)
    {
        int start, end;
        cin >> start >> end; // 这两位大侠之间要结成一派
        int root1 = unionsearch(start);
        int root2 = unionsearch(end);
        if (root1 != root2) //这两人的掌门不同，则合为一派
        {
            pre[root1] = root2;
            total--; // 江湖门派少了一个
        }
    }
    cout << total << endl;
    return 0;
}