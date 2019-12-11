#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> goods(n, vector<int>(2)); // 0为b，1为a
    for (int i = 0; i < n; i++)
    {
        cin >> goods[i][1] >> goods[i][0];
    }
    sort(goods.begin(), goods.end());
    int sum_ai = 0, min_bi = 0, size_A = n;
    int right = 0, left = 0;
    while (right < n)
    {
        if (sum_ai < size_A)
        {
            sum_ai += goods[right][1];
            min_bi += goods[right][0];
            size_A--;
        }
        right++;
    }
    cout << min_bi << endl;
    return 0;
}