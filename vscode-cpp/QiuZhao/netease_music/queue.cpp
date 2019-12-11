#include <iostream>

using namespace std;

string rev(string str)
{
    string S = str;
    string result;
    for (auto &s : S)
    {
        if (s == '0')
        {
            s = '1';
        }
        else
        {
            s = '0';
        }
    }
    int i = 0;
    for (; i < S.length(); ++i)
    {
        if(S[i] !=0)
        {
            break;
        }
    }
    for (size_t j = i; j < S.length();j++)
    {
        result.push_back(S[j]);
    }
        return result;
}

int main()
{
    int T;
    cin >> T;
    for (size_t i = 0; i < T; ++i)
    {
        string strS, strT;
        cin >> strS >> strT;
        string StrSum = strS + strT;
    }
}