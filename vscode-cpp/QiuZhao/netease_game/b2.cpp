#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (size_t i = 0; i < T; i++)
    {
        string strN;
        vector<int> strN_count; // 记录'N'次数
        cin >> strN;
        int count = 0;
        for (size_t j = 0; j < strN.size(); j++)
        {

            if (strN[j] != 'N')
            {
                strN_count.push_back(count);
                count = 0;
                continue;
            }
            count++;
        }
        strN_count.push_back(count);

        if (strN_count.size() < 4)
        {
            cout << strN.size() << endl;
            strN.clear();
            strN_count.clear();
            continue;
        }

        int resultN = 0;
        for (size_t j = 0; j < strN_count.size() - 2; j++)
        {
            resultN = max(resultN, strN_count[j] + strN_count[j + 1] + strN_count[j + 2] + 2);
        }

        cout << resultN << endl;
        strN.clear();
        strN_count.clear();
    }
}