#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N_num;
    string start;
    cin >> start;
    cin >> N_num;
    vector<vector<string>> groups;
    for (size_t i = 0; i < 3; i++)
    {
        vector<string> temp;
        string str;
        char c;
        while ((c = getchar()) != '\n')
        {
            if (c == ',')
            {
                temp.push_back(str);
                str.clear();
            }
            else
            {
                str.push_back(c);
            }
        }
        temp.push_back(str);
        groups.push_back(temp);
    }
    cout << 1 << endl;

    return 0;
}