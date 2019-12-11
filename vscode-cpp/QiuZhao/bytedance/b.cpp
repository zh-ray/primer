#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp = n / 2;
    vector<unsigned long long> result(1000, 0);
    result[0] = 1;
    result[1] = 1;
    for (size_t i = 2; i <= temp; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            result[i] += ((result[j - 1] % 1000000007) * (result[i - j] % 1000000007)) % 1000000007;
        }
    }
    cout << result[temp] << endl;
}