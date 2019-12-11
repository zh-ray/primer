#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, temp;
    vector<int> apples;

    vector<int> queries;
    cin >> n;
    vector<int> results(0, n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> temp;
        apples.push_back(temp);
    }
    cin >> m;
    for (size_t i = 0; i < m; i++)
    {
        cin >> temp;
        queries.push_back(temp);
    }

    int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        sum += apples[i];
        results.push_back(sum);
    }

    for (auto q : queries)
    {
        int low = 0;
        int high = n;

        while (low < high)
        {
            int mid = low + (high - low) / 2;
            if (results[mid] < q)
            {
                low = mid + 1;
            }
            else
            {
                high = mid;
            }
        }
        cout << high + 1 << endl;
    }
}