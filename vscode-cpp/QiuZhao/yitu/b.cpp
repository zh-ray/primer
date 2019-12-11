#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<string>> nums(n, vector<string>(m)); //创建多维数组

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cin >> nums[i][j];
        }
    }

    for (size_t i = 0; i < n; i++)
    {

    }


}