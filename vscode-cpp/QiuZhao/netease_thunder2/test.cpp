#include <iostream>
#include <map>
#include <set>
using namespace std;
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
    }
    if (n != 1)
        st[n]++;
}
int main()
{
    int n;
    cin >> n;
    map<int, int> st;
    prime_diecom(n, st);
    for (auto s : st)
    {
        cout << s.first << " " << s.second << endl;
    }
}