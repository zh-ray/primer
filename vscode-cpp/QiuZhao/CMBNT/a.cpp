#include <iostream>
using namespace std;
bool fun(int n)
{
    int result = 1;
    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (!(n % i))
        {
            result *= i;
        }
    }
    return result == n;
}
int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 2; i <= n;i++)
    {
        if (fun(i))
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}