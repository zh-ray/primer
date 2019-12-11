#include <iostream>
#include <vector>
#include<math.h>

using namespace std;

int main()
{
    int P, Q;
    cin >> P >> Q;

    int(*trees)[2] = new int[4098][2];
    trees[0][0] = 0;
    trees[0][1] = 1;
    trees[4097][0] = 1;
    trees[4097][1] = 0;
    trees[2048][0] = 1;
    trees[2048][1] = 1;

    int low, high,mid;

    if (P / Q == 1)
    {
        cout << 1 << " " << 1;
        return 0;
    }
    else if (P / Q > 1)
    {
        low = 2048;
        high = 4098;
    }
    else
    {
        low = 0;
        high = 2048;
    }

    int count = 1;

    while (low <= high)
    {
        count++;
        mid = (low + high) / 2;
        if(P==trees[mid][0]&&Q==trees[mid][0])
        {
            break;
        }
        if (P/Q > mid)
        {
            low = mid + 1;
        }
        if(P/Q < mid)
        {
            high = mid - 1;
        }

    }
    int R = count;
    int C = mid - pow(2, 12 - count);
    cout << R << " " << C;

}