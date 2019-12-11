#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> height;
    int sum = 0;
    int flag;
    for (size_t i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        sum += temp;
        height.push_back(temp);
    }
    if (sum % n == 0)
    {
        flag = 0;
    }
    else
    {
        flag = 1;
    }

    int m = 0;
    int(*result)[2] = new int[k][2];
    for (; m < k; m++)
    {
        auto max_value = max_element(height.begin(), height.end());
        auto min_value = min_element(height.begin(), height.end());
        if ((*max_value - *min_value) <= flag)
        {

            break;
        }
        --*max_value;
        ++*min_value;
        result[m][0] = max_value - height.begin();
        result[m][1] = min_value - height.begin();
    }
    cout << *max_element(height.begin(), height.end()) - *min_element(height.begin(), height.end()) << " " << m << endl;
    for (size_t i = 0; i < m; i++)
    {
        cout << result[i][0]+1 << " " << result[i][1]+1 << endl;
    }

    delete[] result;
    return 0;
}