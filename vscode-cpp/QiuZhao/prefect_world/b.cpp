#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int N_pets;
    cin >> N_pets;
    if (N_pets == 0)
    {
        return 0;
    }
    vector<string> type_pets(3);
    cin >> type_pets[0] >> type_pets[1] >> type_pets[2];
    for (size_t i = 0; i < N_pets; i++)
    {
        string name;
        int n;
        cin >> name >> n;
        if ((n - 1) == 1)
        {
            if (name.size() < type_pets[1].size())
            {
                cout << name + type_pets[1] << endl;
            }
            else if (name.substr(name.size() - type_pets[1].size()) == type_pets[1])
            {
                cout << name << endl;
            }

            else
            {
                cout << name + type_pets[1] << endl;
            }
        }
        else
        {
            if (name.substr(0, type_pets[n - 1].size()) == type_pets[n - 1])
            {
                cout << name << endl;
            }
            else
            {
                cout << type_pets[n - 1] + name << endl;
            }
        }
    }
    return 0;
}