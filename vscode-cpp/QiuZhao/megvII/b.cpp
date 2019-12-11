#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
int maxWindow(string str, int k)
{
    int maxLen = -1;
    int left = 0, right = 0;
    map<char, int> window;
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
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}
int main()
{
    int k;
    string str;
    cin >> k >> str;
    cout << maxWindow(str, k) << endl;
}