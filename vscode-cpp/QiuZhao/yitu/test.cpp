#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<string> s(3);
    for (size_t i = 0; i < 3; i++)
    {
        cin >> s[i];
    }

    for(auto i:s)
    {
        cout << i << endl;

    }

}