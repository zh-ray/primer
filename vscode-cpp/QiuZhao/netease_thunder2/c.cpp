#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
bool isPrime(int x)
{
    if (x == 1)
    {
        return false;
    }
    if (x == 2 || x == 3)
    {
        return true;
    }
    if (x % 6 != 1 && x % 6 != 5)
    {
        return false;
    }
    int s = sqrt(x);
    for (int i = 5; i <= s; i += 6)
    {
        if (x % i == 0 || x % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}
void prime_diecom(int n, map<int, int> &st)
{

    for (int i = 2; i <= n; i++)
    {
        while (n != i)
        {
            if (n % i == 0)
            {
                st[i]++;
                n = n / i;
            }
            else
                break;
        }
        if (isPrime(n))
        {
            st[n]++;
            break;
        }
    }
}
int main()
{
    int N;
    cin >> N;
    double minRes = 1.0;
    if (N == 1)
    {
        cout << fixed << setprecision(6) << minRes << endl;
        return 0;
    }
    for (int i = 2; i <= N; i++)
    {
        map<int, int> primerNum;
        prime_diecom(i, primerNum);
        /* while (primer < N_tmep)
        {
            if (N_tmep % primer == 0)
            {
                N_tmep = N_tmep / primer;
                primerNum[primer]++;
            }
            else
            {
                primer++;
            }
        }
        primerNum[primer]++; */
        int res = 1;
        for (auto a : primerNum)
        {

            res *= (a.first - 1);
            int temp = a.second - 1;
            while (temp--)
            {
                res *= a.first;
            }
        }
        minRes = min(minRes, res * 1.0 / i);
    }
    cout << fixed << setprecision(6) << minRes << endl;
}