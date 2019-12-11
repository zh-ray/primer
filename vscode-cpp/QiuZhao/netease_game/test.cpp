#include <iostream>
#include <vector>

using namespace std;

bool Find(int target, vector<vector<int>> array)
{
    int n = array.size(); // 二维数组的行数
    int m = 0;            // 二维数组的列数
    while ((m != array[0].size()) && n)
    {
        if (target == array[n - 1][m])
        {
            return true;
        }
        if (target > array[n - 1][m])
        {
            m++; // 忽略一列
        }
        else
        {
            n--; // 忽略一行
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> v;
    vector<int> v1{1, 2, 3};
    vector<int> v2{4, 5, 6};
    v.push_back(v1);
    v.push_back(v2);

    if( Find(2, v))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

}