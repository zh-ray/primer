#include <iostream>
#include <string.h>
#include <unordered_map>
#include <vector>
using namespace std;

int minWindow(string s, string t)
{
    int maxPos = -1;
    int left = 0, right = 0;

    unordered_map<char, int> window;
    unordered_map<char, int> needs;
    for (char s : t)
    {
        needs[s]++;
    }
    int match = 0;
    while (right < s.size())
    {
        if (needs.count(s[right]))
        {
            window[s[right]]++;
            if (window[s[right]] == needs[s[right]])
            {
                match++;
            }
        }
        right++;
        while (match == needs.size())
        {
            if (maxPos < left)
            {
                maxPos = left;
            }
            if (needs.count(s[left]))
            {
                window[s[left]]--;
                if (window[s[left]] < needs[s[left]])
                {
                    match--;
                }
            }
            left++;
        }
    }
    return maxPos + 1;
}
int main()
{
    string strs, substrs;
    cin >> strs >> substrs;
    cout << minWindow(strs, substrs) << endl;
    return 0;
}