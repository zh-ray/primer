#include <iostream>
#include <string>
#include <vector>

using namespace std;

int find(char c, string str)
{
    int count=0;
    for(auto s: str)
    {
        if(s == c)
        {
            ++count;
        }
    }
    return count;
}

int main()
{
    vector<string> S_num;
    string head;
    string tail;
    string s;
    bool flag = true;

    while (cin >> s)
    {
        S_num.push_back(s);
    }

    for(auto ss : S_num)
    {
        int last = ss.end() - ss.begin() - 1;
        head.push_back(ss[0]);
        tail.push_back(ss[last]);
    }

    for (auto sss : S_num)
    {
        int last = sss.end() - sss.begin() - 1;
        if (sss[0] == sss[last])
        {
            if(find(sss[0],tail) == 1 || find(sss[last],head) == 1)
            {
                flag = false;
            }

        } else
        {
            if(find(sss[0],tail) == 0 || find(sss[last],head) == 0)
            {
                flag = false;
            }
        }
    }
    if(flag)
    {
        cout << "true";
    } else
    {
        cout << "false";
    }
}