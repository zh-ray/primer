#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

/**
 * Welcome to vivo !
 */

int solution(int a[], int N)
{

    // TODO Write your code here
    if (N == 0)
    {
        return -1;
    }
    if (N == 1)
    {
        return 0;
    }
    int reach = 0, last = 0, maxreach = 0;
    for (int i = 0; i < N - 1; i++)
    {
        maxreach = max(maxreach, i + a[i]);
        if (i == last)
        {
            reach++;
            last = maxreach;
            if (last >= N - 1)
            {
                break;
            }
        }
    }
    return last >= N - 1 ? reach : -1;
}

int main()
{
    string str("");
    getline(cin, str);
    int a[2000];
    int i = 0;
    char *p;
    int count = 0;

    const char *strs = str.c_str();
    p = strtok((char *)strs, " ");
    while (p)
    {
        a[i] = atoi(p);
        count++;
        p = strtok(NULL, " ");
        i++;
        if (i >= 2000)
            break;
    }

    int num = solution(a, count);
    cout << num << endl;
    return 0;
}