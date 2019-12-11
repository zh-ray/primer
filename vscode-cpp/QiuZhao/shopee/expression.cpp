#include <iostream>

using namespace std;

bool matchCore(const string &pattern, const string &str, int pattern_pos, int str_pos, int start, int length)
{
    // 当模式结束，则输出结果
    if (pattern[pattern_pos] == '\0')
    {
        cout << start << " " << length << endl;
        return true;
    }

    // 当模式未结束，但字符串结束，则表示没有找到
    if (pattern[pattern_pos] != '\0' && str[str_pos] == '\0')
    {
        return false;
    }

    // 当前字符并非*
    if (pattern[pattern_pos] != '*')
    {
        if (pattern[pattern_pos] == str[str_pos])
        {
            // 转移到下一状态
            return matchCore(pattern, str, pattern_pos + 1, str_pos + 1, start, length + 1);
        }
        else
        {
            return false;
        }
    }
    else // 当前字符为*
    {
        // 分为两种情况
        bool p_status = matchCore(pattern, str, pattern_pos + 1, str_pos, start, length);     // 忽略*
        bool s_status = matchCore(pattern, str, pattern_pos, str_pos + 1, start, length + 1); // *开始匹配
        return s_status || p_status;
    }

    return false;
}

int main()
{
    string pattern;
    string str;
    cin >> pattern >> str;

    // 如果模式只有一个*，则能匹配所有字符串组合
    if (pattern == "*")
    {
        for (size_t i = 0; i < str.size(); i++)
        {
            for (size_t j = 1; j < str.size() - i + 1; j++)
            {
                cout << i << " " << j << endl;
            }
        }
        return 0;
    }

    bool flag = true;
    for (size_t i = 0; i < str.size(); i++)
    {
        if (matchCore(pattern, str, 0, i, i, 0))
        {
            flag = false;
        }
    }

    if (flag)
    {
        cout << -1 << " " << 0 << endl;
    }

    return 0;
}