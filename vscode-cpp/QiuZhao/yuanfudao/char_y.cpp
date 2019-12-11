#include <iostream>
using namespace std;
int main()
{
    int N_chars;
    cin >> N_chars;
    int k = (N_chars - 1) / 3;
    char c = getchar();
    string chars;
    while((c = getchar()) != '\n')
    {
        chars.push_back(c);
    }
    int pos = 0;
    for (int i = 0; i < 2 * k + 1; i++)
    {
        if (i < k)
        {
            int times = i;
            while(times--)
            {
                cout << " ";
            }
            cout << chars[pos];
            pos++;
            int temp = 2 * (k - i - 1) + 1;
            while (temp--)
            {
                cout << " ";
            }
            cout << chars[pos];
            pos++;
            cout << endl;
        }
        else
        {
            int times = k;
            while (times--)
            {
                cout << " ";
            }
            cout << chars[pos];
            pos++;
            cout << endl;
        }
    }
    return 0;
}