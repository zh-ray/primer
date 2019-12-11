#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> weight(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> weight[i];
    }

    sort(weight.begin(), weight.end());
    int result = 0;
    for (size_t i = 0; i < n - 1; i++)
    {
        if (weight[i + 1] - weight[i] <= k)
        {
            result++;
            i = i + 1;
        }
    }
    cout << result << endl;
}