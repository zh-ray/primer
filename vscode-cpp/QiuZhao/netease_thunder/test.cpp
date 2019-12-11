#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v{1, 2, 3,4};
    for (size_t j = v.size(); j != 0; j--)
    {
        cout << v[j-1];
        if(v[j-1] == 2)
        {
            int i = v[j - 1];
            v.erase(v.begin() + j - 1);
            v.push_back(i);
        }
    }
    for(auto s:v)
    {
        cout << s;
    }
}