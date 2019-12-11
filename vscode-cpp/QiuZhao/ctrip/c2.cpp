#include <algorithm>
#include <iostream>
#include <limits>
#include <numeric>
#include <vector>

using namespace std;

/*请完成下面这个函数，实现题目要求的功能
当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
******************************开始写代码******************************/
int getMax(vector<int> array, int len)
{
    int max = -1;
    for (int i = 0; i < len; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

int getSum(vector<int> array, int len)
{
    int total = 0;
    for (int i = 0; i < len; i++)
    {
        total += array[i];
    }
    return total;
}

int getRes(vector<int> array, int len, int mid)
{
    int total = 0, numPos = 1;
    for (int i = 0; i < len; i++)
    {
        total += array[i];
        if (total > mid)
        {
            total = array[i];
            numPos++;
        }
    }
    return numPos;
}

int schedule(int m, vector<int> array)
{
    int len = array.size();
    int low = getMax(array, len);
    int high = getSum(array, len);
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        int res = getRes(array, len, mid);
        if (res <= m)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}
/******************************结束写代码******************************/

int main()
{
    int res;

    int _array_size = 0;
    int m;
    cin >> m;
    cin >> _array_size;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    vector<int> _array;
    int _array_item;
    for (int _array_i = 0; _array_i < _array_size; _array_i++)
    {
        cin >> _array_item;
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        _array.push_back(_array_item);
    }

    res = schedule(m, _array);
    cout << res << endl;

    return 0;
}