#include <algorithm>
#include <iostream>
#include <unordered_map>
using namespace std;
int maxWindow(int k, string str)
{
    int maxLen = -1;
    int left = 0, right = 0;
    unordered_map<char, int> window;
    int match = 0;
    while (right < str.size())
    {
        window[str[right]]++;
        if (window[str[right]] == 1)
        {
            match++;
        }
        right++;
        while (match > k)
        {
            window[str[left]]--;
            if (window[str[left]] == 0)
            {
                match--;
            }
            left++;
        }
        maxLen = max(maxLen, right - left);
    }
    return maxLen;
}

int main()
{
    int k;
    string str;
    cin >> k >> str;
    cout << maxWindow(k, str) << endl;
    return 0;
}