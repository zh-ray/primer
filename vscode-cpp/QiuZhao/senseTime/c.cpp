#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, a, b, c, f0;
    vector<unsigned long long> result;
    cin >> n >> a >> b >> c >> f0;

    if (n == 0)
    {
        cout << f0 << endl;
        return 0;
    }
    if (n == 1)
    {
        cout << a * f0 + 32768 << endl;
        return 0;
    }
    if (n == 2)
    {
        cout << 32768 * a + a * a * f0 + b * f0 + 32773 << endl;
        return 0;
    }
    result.push_back(f0);
    result.push_back(a * f0 + 32768);
    result.push_back(32768 * a + a * a * f0 + b * f0 + 32773);
    for (size_t i = 3; i < n + 1; i++)
    {
        result.push_back(a * result[i - 1] + b * result[i - 2] + c * result[i - 3] + 2 * i * i - i + 32767);
    }
    cout << result[n]%1000000007 << endl;


    return 0;
}