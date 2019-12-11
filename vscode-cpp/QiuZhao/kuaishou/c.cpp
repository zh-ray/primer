#include <iostream>
#include <vector>
using namespace std;
int main()
{
    char c;
    vector<char> first;
    int count = 0;
    while ((c = getchar()) != '\n')
    {
        if (c != ' ')
        {
            first.push_back(c);
            count++;
        }
        if (count == 4)
        {
            count = 0;
            first.push_back(' ');
        }
    }
    count = 4;
    while ((c = getchar()) != '\n')
    {
        if (count > first.size())
        {
            first.push_back(c);
        }
        if (c != ' ')
        {
            first[count] = c;
            count += 5;
        }
    }
    for (char c : first)
    {
        if (c != ' ')
        {
            cout << c << " ";
        }
    }
}