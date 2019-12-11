#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int k;
    char c;
    while (cin >> k && (c = getchar()) != '\n')
    {
        vector<int> chars(128, 0);
        vector<char> result_k;

        while ((c = getchar()) != '\n')
        {
            chars[c - ' ']++;
            if (chars[c - ' '] == 1)
            {
                result_k.push_back(c);
            }
            else
            {
                vector<char>::iterator v = find(result_k.begin(), result_k.end(), c);
                if(v != result_k.end())
                {
                    result_k.erase(v);
                }
            }
        }
        if (result_k.size() >= k)
        {
            cout << "[" << result_k[k - 1] << "]" << endl;
        }
        else
        {
            cout << "Myon~" << endl;
        }
    }
    return 0;
}