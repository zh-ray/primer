#include <algorithm>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> results(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> results[i];
    }
    vector<double> ex(51);
    int maxCount = *max_element(results.begin(), results.end());
    for (size_t i = 1; i <= maxCount; i++)
    {
        double temp = 1.0;
        for (size_t j = 0; j < results.size(); j++)
        {
            if (results[j] >= i)
            {
                temp *= i * 1.0 / results[j];
            }
        }
        ex[i] = temp;
    }

    for (size_t i = maxCount; i >= 2; i--)
    {
        ex[i] = ex[i] - ex[i - 1];
    }
    double ans = 0;
    for (size_t i = 1; i <= maxCount; i++)
    {
        ans += ex[i] * i;
    }
    cout << fixed << setprecision(2) << ans << endl;
    return 0;
}