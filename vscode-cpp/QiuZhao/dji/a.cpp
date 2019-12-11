#include <iostream>

using namespace std;

int main()
{
    int N, A, X;
    while (cin >> N >> A >> X)
    {
        int sumTime = 0;
        for (size_t i = 0; i < N; i++)
        {
            int temp;
            cin >> temp;
            sumTime += temp;
        }

        int i = 1;
        int result;
        if (sumTime > 60 * A)
        {
            for (; i <= X; i++)
            {
                sumTime -= (60 * A);
                if (sumTime < 60 * A)
                {
                    break;
                }
            }

            if ((sumTime < 60 * A) && (i < X))
            {
                if (sumTime % A == 0)
                {
                    result = i * 60 + sumTime / A;
                }
                else
                {
                    result = i * 60 + sumTime / A + 1;
                }
            }
            else
            {
                result = X * 60 + sumTime;
            }
        }
        else
        {
            if (sumTime % A == 0)
            {
                result = sumTime / A;
            }
            else
            {
                result = sumTime / A + 1;
            }
        }

        if (result > 240)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << result << endl;
        }
    }
}