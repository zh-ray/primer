#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int value(vector<int> a, vector<int> b, int index, vector<int> temp)
{
    int result = 0;
    if (count(a.begin(), a.end(), index) + count(b.begin(), b.end(), index) == 0)
    {
        return 0;
    }
    else if (count(a.begin(), a.end(), index) + count(b.begin(), b.end(), index) == 1)
    {
        temp.erase(temp.begin() + index);
        for (size_t i = 0; i < temp.size(); i++)
        {
            result += temp[i];
        }
        return result;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int N_nodes;
    cin >> N_nodes;
    vector<int> nodes;
    for (size_t i = 0; i < N_nodes; i++)
    {
        int temp;
        cin >> temp;
        nodes.push_back(temp);
    }
    vector<int> left_pos;
    vector<int> right_pos;
    char c;
    while ((c = getchar() != NULL))
    {
        ungetc(c, stdin);
        int left, right;
        cin >> left >> right;
        left_pos.push_back(left);
        right_pos.push_back(right);
    }
    cout << abs(value(left_pos, right_pos, 0, nodes)) << endl;
}