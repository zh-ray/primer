#include <bits/stdc++.h>
#include <iostream>
#include <map>

using namespace std;

/*
 * Complete the 'betterCompression' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string betterCompression(string s)
{
    map<char, int> characters;
    int pos = 0;
    char key;
    int value;
    while (pos < s.size())
    {
        if (islower(s[pos]))
        {
            key = s[pos];
            pos++;
        }
        int temp = 0;
        while (isdigit(s[pos]) && pos < s.size())
        {
            temp = temp * 10 + (s[pos] - '0');
            pos++;
        }
        value = temp;
        characters[key] += value;
    }
    string res;
    for (auto c : characters)
    {
        res += c.first + to_string(c.second);
    }
    return res;
}

int main()
{
    // ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = betterCompression(s);

    cout << result << "\n";

    //fout.close();

    return 0;
}
