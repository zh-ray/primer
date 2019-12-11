#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
void heap_ify(vector<int> &arr, int low, int high)
{
    int father = low;
    int left = 2 * father + 1;  // 左孩子
    int right = 2 * father + 2; // 右孩子
    if (left < high && arr[left] > arr[father])
    {
        father = left;
    }
    if (right < high && arr[right] > arr[father])
    {
        father = right;
    }
    if (father != low)
    {
        int temp = arr[low];
        arr[low] = arr[father];
        arr[father] = temp;
        heap_ify(arr, father, high);
    }
}
void heap_sort(vector<int> &arr)
{
    int len = arr.size();
    // 初始化堆从最后一个父结点
    for (int i = len / 2 - 1; i >= 0; --i)
    {
        heap_ify(arr, i, len);
    }
    // 从堆中取出最大的元素再调整堆
    for (int i = len - 1; i > 0; --i)
    {
        int temp = arr[i];
        arr[i] = arr[0];
        arr[0] = temp;
        // 调整堆
        heap_ify(arr, 0, i);
    }
}
int main()
{
    int n;
    cin >> n;
    int k = ceil(n * 0.001);
    vector<int> scores(n);
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }
    heap_sort(scores);
    while (k--)
    {
        cout << scores.back() << " ";
        scores.pop_back();
    }
    return 0;
}