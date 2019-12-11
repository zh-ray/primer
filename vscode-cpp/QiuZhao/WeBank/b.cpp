#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int mod = 1000000 + 3;
    long long n;
    cin >> n;
    long long res = 1;
    for (size_t i = 1; i <= n; i++)
    {
        res = ((res % mod) * (i % mod)) % mod;
    }
    cout << res << endl;
}