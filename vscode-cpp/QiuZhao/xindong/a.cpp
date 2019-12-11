#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<char> dictory;
bool compare(string a, string b)
{
    int i = 0;
    while (a[i] == b[i] && i < a.size() && i < b.size())
    {
        i++;
    }
    if (i == a.size() && i == b.size())
    {
        return true;
    }
    else if (find(dictory.begin(),dictory.end(),a[i]) < find(dictory.begin(),dictory.end(),b[i]))
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
    string dict;
    cin >> dict;

    for (size_t i = 0; i < dict.size(); i++)
    {
        dictory.push_back(dict[i]);
    }
    int N_sample;
    cin >> N_sample;
    vector<string> strs;
    for (size_t i = 0; i < N_sample; i++)
    {
        string temp;
        cin >> temp;
        strs.push_back(temp);
    }
    sort(strs.begin(), strs.end(), compare);
    for(string s:strs)
    {
        cout << s << endl;
    }
    return 0;
}