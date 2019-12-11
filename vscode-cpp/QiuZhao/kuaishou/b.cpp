#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m_sample;
    vector<int> result;
    cin >> m_sample;
    for (size_t i = 0; i < m_sample; i++)
    {
        int num;
        cin >> num;
        if (num == 1000 || num == 1 || num == 10 || num == 100)
        {
            cout << "true" << endl;
            continue;
        }
        result.push_back(num);
        bool flag = true;
        while (num != 1)
        {
            int a, b, c;
            if (num > 0 && num < 10)
            {
                num = num * num;
                if (num == 1)
                {
                    break;
                }
                if (find(result.begin(), result.end(), num) != result.end())
                {
                    flag = false;
                    break;
                }
                result.push_back(num);
            }
            else if (num >= 10 && num < 100)
            {
                a = num / 10;
                b = num % 10;
                num = a * a + b * b;
                if (num == 1)
                {
                    break;
                }
                if (find(result.begin(), result.end(), num) != result.end())
                {
                    flag = false;
                    break;
                }
                result.push_back(num);
            }
            else
            {
                a = num / 100;
                b = (num / 10) % 10;
                c = num % 10;
                num = a * a + b * b + c * c;
                if (num == 1)
                {
                    break;
                }
                if (find(result.begin(), result.end(), num) != result.end())
                {
                    flag = false;
                    break;
                }
                result.push_back(num);
            }
        }
        if (flag)
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
    }
}