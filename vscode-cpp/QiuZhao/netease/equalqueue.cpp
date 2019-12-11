#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int k;
    cin >> k;
    for (size_t i = 0; i < k; i++)
    {
        int n_size;
        cin >> n_size;
        vector<int> counts;
        int first;
        cin >> first;
        counts.push_back(first);

        for (size_t j = 1; j < n_size; j++)
        {
            int temp;
            cin >> temp;
            if (find(counts.begin(), counts.end(), temp) != counts.end())
            {
                continue;
            }
            else
            {
                counts.push_back(temp);
            }
        }
        if (counts.size() < 4)
        {

            if (counts.size() == 1 || counts.size() == 2)
            {
                cout << "YES" << endl;
            }

            if (counts.size() == 3)
            {
                sort(counts.begin(), counts.end());
                if (2 * counts[1] == counts[0] + counts[2])
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
        else
        {
            cout << "NO" << endl;
        }

        counts.clear();
    }
}