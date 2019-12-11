#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> inputs{4, 3, 5, 7, 12, 1, 10};
    int len = inputs.size();
    while (--len)
    {
        int i = 0;
        while (inputs[i] < inputs[len])
        {
            i++;
        }
        while (inputs[i] > inputs[len])
        {
            i++;
        }
        if (i != len)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}