#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int relation[200][200];
int main()
{
    int N_users;
    cin >> N_users;
    int count = 0;
    vector<int> check;
    bool flag = true; // 自成一个豆油的标志
    for (size_t i = 0; i < N_users; i++)
    {
        for (size_t j = 0; j < N_users; j++)
        {
            cin >> relation[i][j];
        }
    }

    for (size_t i = 0; i < N_users; i++)
    {
        if (find(check.begin(), check.end(), i) == check.end())
        {
            vector<int> result;
            for (size_t j = i; j < N_users; j++)
            {
                if (relation[i][j] >= 3)
                {
                    relation[i][j] = 0;
                    result.push_back(j);
                    check.push_back(j);
                    flag = false;
                }
            }
            if (flag)
            {
                count++;
            }
            else
            {
                while (result.size())
                {
                    int temp = result[result.size() - 1];
                    result.pop_back();
                    for (size_t k = 0; k < N_users; k++)
                    {
                        if (k == i)
                        {
                            continue;
                        }
                        else if (relation[temp][k] >= 3)
                        {
                            if (find(result.begin(), result.end(), temp) == result.end())
                            {
                                result.push_back(k);
                                check.push_back(k);
                                relation[temp][k] = 0;
                            }
                        }
                    }
                }
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}