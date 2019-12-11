#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, D;
    cin >> N >> D;
    int num[N][N];
    for (size_t i = 0; i < N; ++i)
    {
        for (size_t j = 0; j < N; ++j)
        {
            cin >> num[i][j];
        }
    }

    int result = 0, result_tmp = 0;

    //横
    for (size_t i = 0; i < N; ++i)
    {
        for (size_t j = 0; j < N - D + 1; ++j)
        {
            for (size_t k = 0; k < D; ++k)
            {
                result_tmp += num[i][j + k];
            }
            result = (result > result_tmp ? result : result_tmp);
            result_tmp = 0;
        }
    }

    //竖
    for (size_t i = 0; i < N; ++i)
    {
        for (size_t j = 0; j < N - D + 1; ++j)
        {
            for (size_t k = 0; k < D; ++k)
            {
                result_tmp += num[j + k][i];
            }
            result = (result > result_tmp ? result : result_tmp);
            result_tmp = 0;
        }
    }

    //右下
    for (size_t i = 0; i < N; ++i)
    {
        for (size_t j = 0; j < N - D + 1; ++j)
        {
            for (size_t k = 0; k < D; ++k)
            {
                result_tmp += num[i + k][j + k];
            }
            result = (result > result_tmp ? result : result_tmp);
            result_tmp = 0;
        }
    }

    cout << result;
}