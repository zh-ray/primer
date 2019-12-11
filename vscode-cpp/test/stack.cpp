#include <iostream>
#include <vector>
#include <stack>
using namespace std;

bool IsPopOrder(vector<int> pushV, vector<int> popV)
{
    if (pushV.size() == 0)
    {
        return false;
    }
    stack<int> result;
    int i = 0, j = 0;
    while (i < pushV.size())
    {
        result.push(pushV[i++]);
        while (result.size() && result.top() == popV[j])
        {
            result.pop();
            j++;
        }
    }
    if (result.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    vector<int> pushV{1, 2, 3, 4, 5};
    vector<int> popV{4, 3, 5, 2, 1};
    cout << IsPopOrder(pushV, popV);
}