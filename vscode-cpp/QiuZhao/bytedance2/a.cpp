#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> heights(N);
    vector<int> res(N);
    for (int i = 0; i < N; i++)
    {
        cin >> heights[i];
    }

    for (int i = 0; i < N - 1; i++)
    {
        int count = 0;
        int temp = i;
        if (heights[temp] > heights[temp + 1])
        {
            temp++;
            count++;
            while (temp < N && heights[temp] < heights[temp + 1] && heights[i] >= heights[temp + 1])
            {
                count++;
                temp++;
            }
        }
        res[i] = count;
    }
    auto iter = max_element(res.begin(), res.end());
    if (*iter == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << heights[iter - res.begin()] << endl;
    }
    return 0;
}