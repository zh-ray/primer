#include <iostream>
using namespace std;
int main()
{
    int N_string;
    cin >> N_string;
    string chars;
    cin >> chars;
    bool flag = false; // false表示小写，true表示大写
    int count = 0;
    for (size_t i = 0; i < N_string; i++)
    {
        bool falg_char = islower(chars[i]); // 判断大小写
        if (flag)
        {
            // 当前是大写模式
            if (falg_char)
            {
                // 字母为小写
                count += 2;
                if (islower(chars[i + 1]))
                {
                    flag = true;
                }
            }
            else
            {
                // 字母为大写
                count++;
            }
        }
        else
        {
            // 当前是小写模式
            if (falg_char)
            {
                // 字母为小写
                count++;
            }
            else
            {
                // 字母为大写
                count += 2;
                if (!islower(chars[i + 1]))
                {
                    flag = true;
                }
            }
        }
    }
    cout << count << endl;
}