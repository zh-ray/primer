#include <iostream>
#include <vector>

using namespace std;

bool dfs(vector<int> &a, vector<int> &b, int &m, unsigned prev)
{
    if (m == 0)
        return true;
    for (size_t i = 0; i < a.size(); i++)
    {
        if (a[i] * 2 > m + 1)
            return false;
        if (a[i] > 0 && prev != i + 1)
        {
            a[i]--;
            m--;
            b.push_back(i + 1);
            if (dfs(a, b, m, i + 1))
                return true;
            b.pop_back();
            a[i]++;
            m++;
        }
    }
    return false;
}

int main(void)
{
    int n, m = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m += a[i];
    }
    vector<int> b;
    int m1 = m;
    if (dfs(a, b, m1, 0))
    {
        for (int i = 0; i < m; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    else
        cout << "-" << endl;
    return 0;
}