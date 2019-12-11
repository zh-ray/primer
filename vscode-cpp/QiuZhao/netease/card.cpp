#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    string cards;
    while (cin >> n >> k >> cards)
    {

        vector<int> counts(26, 0);

        for (size_t i = 0; i < cards.size(); i++)
        {
            counts[cards[i] - 'A']++;
        }

        sort(counts.begin(), counts.end());

        long result = 0;
        for (size_t i = 0; i < counts.size(); i++)
        {
            if (k < counts[25 - i])
            {
                break;
            }
            k -= counts[25 - i];
            result += pow(counts[25 - i], 2);
        }

        result += pow(k, 2);

        cout << result << endl;
    }
    return 0;
}