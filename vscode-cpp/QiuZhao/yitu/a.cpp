#include <algorithm>
#include <iostream>
#include <vector>
#include<limits>

using namespace std;

int main()
{
    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<string>> hobbies(N, vector<string>(M)); //创建多维数组

    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
        {
            cin >> hobbies[i][j];
        }
    }

    int result = numeric_limits<int>::min();
    for (size_t i = 0; i < N; i++)
    {
        int times = 0;
        for (size_t k = 0; k < N; k++)
        {
            int count = 0; //相同爱好的个数
            if (k == i)
            {
                continue;
            }
            for (size_t j = 0; j < M; j++)
            {

                if (find(hobbies[k].begin(), hobbies[k].end(), hobbies[i][j]) != hobbies[k].end())
                {
                    count++;
                }
                if (count == K)
                {
                    break;
                }
            }
            if(count == K)
            {
                times++;
            }
        }
        result = result > times ? result : times;
    }
    cout << result << endl;
    return 0;
}