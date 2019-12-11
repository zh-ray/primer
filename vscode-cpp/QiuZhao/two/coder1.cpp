#include <algorithm>
#include <iostream>
#include <queue>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    vector<int> number(10, 0);
    vector<int> times(10, 0);
    string ansstr;
    int ansi;
    int n, k;
    int anscost = -1;
    string str;
    bool flag = false;
    cin >> n >> k;
    char c;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        str.push_back(c);
        number[c - '0']++;
        if (number[c - '0'] >= k)
        {
            flag = true;
        }
    }
    if (flag)
        cout << str << endl;
    else
    {
        for (int i = 0; i <= 9; i++)
        {
            for (int ii = 0; ii <= 9; ii++)
                times[ii] = 0;
            if (number[i] == 0)
                continue;
            int tmpcost = 0;
            int t = number[i];
            int dif = 1;
            while (t < k)
            {
                if (i + dif <= 9)
                {
                    if (number[i + dif] + t >= k)
                    {
                        times[i + dif] = k - t;
                        tmpcost += (dif) * (k - t);
                        break;
                    }
                    else
                    {
                        times[i + dif] = number[i + dif];
                        tmpcost += (dif)*number[i + dif];
                        t += number[i + dif];
                    }
                }
                if (i - dif >= 0)
                {
                    if (number[i - dif] + t >= k)
                    {
                        times[i - dif] = k - t;
                        tmpcost += dif * (k - t);
                        break;
                    }
                    else
                    {
                        times[i - dif] = number[i - dif];
                        tmpcost += number[i - dif];
                        t += number[i - dif];
                    }
                }
                dif++;
            }
            string sstr(str);
            for (int j = 0; j < sstr.size(); j++)
            {
                int ttt = sstr[j] - '0';
                if (sstr[j] - '0' > i && times[(int)(sstr[j] - '0')] > 0)
                {
                    times[ttt] = times[(int)(sstr[j] - '0')] - 1;
                    sstr[j] = '0' + i;
                }
            }
            //cout << "  " << endl;
            for (int j = sstr.size() - 1; j >= 0; j--)
            {
                if (sstr[j] - '0' < i && times[(int)(sstr[j] - '0')] > 0)
                {
                    times[(int)(sstr[j] - '0')]--;
                    sstr[j] = '0' + i;
                }
            }
            if (anscost == -1)
            {
                anscost = tmpcost;
                ansi = i;
                ansstr = sstr;
            }
            else if (anscost > tmpcost)
            {
                ansi = i;
                anscost = tmpcost;
                ansstr = sstr;
            }
            else if (anscost == tmpcost)
            {
                anscost = tmpcost;
                if (ansstr > sstr)
                {
                    ansi = i;
                    ansstr = sstr;
                }
            }
        }
        cout << anscost << endl;
        cout << ansstr << endl;
    }
}