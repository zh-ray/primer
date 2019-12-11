#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int M_samples;
    cin >> M_samples;
    for (size_t i = 0; i < M_samples; i++)
    {
        string version1, version2;
        cin >> version1 >> version2;
        if (version1 == version2)
        {
            cout << "false" << endl;
            continue;
        }
        int dot1 = count(version1.begin(), version1.end(), '.');
        int dot2 = count(version2.begin(), version2.end(), '.');
        if (dot1 < dot2)
        {
            int temp = dot2 - dot1;
            while (temp--)
            {
                version1.push_back('.');
                version1.push_back('0');
            }
        }
        if (dot1 > dot2)
        {
            int temp = dot1 - dot2;
            while (temp--)
            {
                version2.push_back('.');
                version2.push_back('0');
            }
        }
        if (version1 == version2)
        {
            cout << "false" << endl;
            continue;
        }
        int dot = max(dot1, dot2);
        int pos1 = 0, pos2 = 0;
        bool flag = true;
        for (size_t j = 0; j <= dot; j++)
        {
            int substr1 = 0, substr2 = 0;
            while (version1[pos1] != '.' && pos1 < version1.size())
            {
                substr1 = 10 * substr1 + (version1[pos1] - '0');
                pos1++;
            }
            pos1++;
            while (version1[pos2] != '.' && pos2 < version2.size())
            {
                substr2 = 10 * substr2 + (version2[pos2] - '0');
                pos2++;
            }
            pos2++;
            if (substr1 < substr2)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "false" << endl;
        }
        else
        {
            cout << "true" << endl;
        }

    }
}