#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for (size_t i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        vector<int> result;
        for (size_t j = 0; j < N; j++)
        {
            int temp, count = 0;
            cin >> temp;
            while (temp)
            {
                temp &= (temp - 1);
                ++count;
            }
            if (find(result.begin(), result.end(), count) == result.end())
            {
                result.push_back(count);
            }
        }
        cout << result.size() << endl;

        result.clear();
    }
    return 0;
}