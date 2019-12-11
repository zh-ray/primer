#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (n > m)
    {
        cout << 0;
        return 0;
    }
    int i;
    vector<int> num(n + 1, 0);

    while (cin >> i)
    {
        num[i]++;
    }
    int result = num[1];
    cout << result;
    for (size_t ii = 2; ii < n + 1; ++ii)
    {
        result = (result < num[ii] ? result : num[ii]);
    }
    cout << result;
    return 0;
}