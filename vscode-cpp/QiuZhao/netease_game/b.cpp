#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>

using namespace std;

// 返回最长连续N串的长度
int lengthN(string str)
{
    int count = numeric_limits<int>::min();
    int temp = 0;
    for (size_t j = 0; j < str.size(); j++)
    {

        if (str[j] == 'N')
        {
            temp++;
        }
        else
        {
            count = max(count, temp);
            temp = 0;
        }
        count = max(count, temp);
    }
    return count;
}

int main()
{
    int T;
    cin >> T;
    string strN;
    vector<int> noN_pos; // 记录非'N'的位置
    for (size_t i = 0; i < T; i++)
    {
        cin >> strN;
        for (size_t j = 0; j < strN.size(); j++)
        {
            if (strN[j] != 'N')
            {
                noN_pos.push_back(j);
            }
        }

        if (noN_pos.size() < 3)
        {
            cout << strN.size() << endl;
            strN.clear();
            noN_pos.clear();
            continue;
        }

        int resultN = lengthN(strN);
        for (size_t k = 0; k < noN_pos.size() - 1; k++)
        {
            int twochange;
            string strN_copy(strN);
            strN_copy[noN_pos[k]] = 'N';
            strN_copy[noN_pos[k + 1]] = 'N';
            twochange = lengthN(strN_copy);
            resultN = max(resultN, twochange);
        }
        cout << resultN << endl;
        strN.clear();
        noN_pos.clear();
    }
}