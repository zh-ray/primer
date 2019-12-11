#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string inputs;
    cin >> inputs;
    vector<int> counts(inputs.size());
    int left = 0, right = 0;
    int L_val = 0, R_val = 0;
    while (right < inputs.size() && left < inputs.size())
    {
        while (inputs[left] == 'R')
        {
            L_val++;
            left++;
        }
        right = left;
        while (inputs[right] == 'L' && right < inputs.size())
        {
            R_val++;
            right++;
        }
        if ((R_val + L_val) % 2 == 0)
        {
            counts[left - 1] = (R_val + L_val) / 2;
            counts[left] = (R_val + L_val) / 2;
        }
        else if (L_val % 2 == 0)
        {
            counts[left - 1] = (R_val + L_val) / 2;
            counts[left] = (R_val + L_val) / 2 + 1;
        }
        else
        {
            counts[left - 1] = (R_val + L_val) / 2 + 1;
            counts[left] = (R_val + L_val) / 2;
        }

        L_val = 0;
        R_val = 0;
        left = right;
    }
    for (int c : counts)
    {
        cout << c << " ";
    }
    return 0;
}