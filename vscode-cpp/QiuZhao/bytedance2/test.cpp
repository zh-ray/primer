#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string s{"1"};
    string s1 = s.substr(1);
    cout << s1 << endl;
    if (s1 == "")
    {
        cout << "1";
    }
}
