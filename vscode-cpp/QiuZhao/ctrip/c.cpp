#include <algorithm>
#include <iostream>
#include <limits>
#include <numeric>
#include <vector>

using namespace std;

/*请完成下面这个函数，实现题目要求的功能
当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
******************************开始写代码******************************/
int schedule(int m, vector<int> array)
{
    if (array.size() == 0)
    {
        return 0;
    }
    vector<vector<int>> res(array.size() + 1, vector<int>(m + 1));
    vector<int> temp(array.size() + 1);
    for (int i = 1; i <= array.size(); i++)
    {
        temp[i] = temp[i - 1] + array[i - 1];
    }
    for (int i = 1; i <= array.size(); i++)
    {
        res[i][1] = temp[i];
    }
    for (int i = 1; i <= m; i++)
    {
        res[1][i] = array[0];
    }

    for (int i = 2; i <= m; i++)
    {
        for (int j = 2; j <= array.size(); j++)
        {
            int minValue = INT_MAX;
            for (int k = 1; k <= j; k++)
            {
                minValue = min(minValue, max(res[k][i - 1], temp[j] - temp[k]));
            }
            res[j][i] = minValue;
            cout << minValue << endl;
        }
    }
    return res[array.size()][m];
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