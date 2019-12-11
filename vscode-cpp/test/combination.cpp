#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

void combine(string str, string &result, int k)
{
    if (k == 0)
    {
        cout << result << endl;
    }
    else
    {
        for (size_t i = 0; i <= str.size() - k; i++)
        {
            result.push_back(str[i]);
            combine(str.substr(i + 1, str.size()), result, k - 1);
            result.pop_back();
        }
    }
}

int main()
{
    string str{"abcdefg"};

    string result;
    combine(str, result, 3);

    return 0;
}