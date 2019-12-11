#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        int temp;
        if (n % 2 == 0)
        {
            temp = pow(10, n / 2 - 1);
            temp += k - 1;
            string out = to_string(temp), out2(out.rbegin(), out.rend());
            cout << out << out2 << endl;
        }
        else
        {
            temp = pow(10, n / 2);
            temp += k - 1;
            string out = to_string(temp), out2(out.rbegin(), out.rend());
            cout << out << out2.substr(1) << endl;
        }
    }
    return 0;
}