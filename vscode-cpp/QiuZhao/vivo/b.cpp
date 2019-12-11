#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <list>

using namespace std;

/**
 * Welcome to vivo !
 */

typedef struct _node
{
    int num;
    struct _node *next;
} node;

void solution(int N, int M)
{
    // TODO Write your code here
    if (N < 1 || M < 1)
    {
        return;
    }
    unsigned int i = 0;
    list<int> numbers;
    for (i = 1; i <= N; ++i)
    {
        numbers.push_back(i);
    }
    list<int>::iterator current = numbers.begin();
    while (numbers.size() > 1)
    {
        for (int i = 1; i < M; ++i)
        {
            current++;
            if (current == numbers.end())
            {
                current = numbers.begin();
            }
        }
        list<int>::iterator next = ++current;
        if (next == numbers.end())
        {
            next = numbers.begin();
        }
        --current;
        cout << *current << " ";
        numbers.erase(current);
        current = next;
    }
    cout << *current;
    return;
}

int main()
{
    int N;
    int M;

    string str("");
    getline(cin, str);

    char *p;
    const char *strs = str.c_str();

    p = strtok((char *)strs, " ");
    N = atoi(p);

    p = strtok(NULL, " ");
    M = atoi(p);

    solution(N, M);

    return 0;
}