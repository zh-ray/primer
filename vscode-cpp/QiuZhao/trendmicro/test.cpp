#include <iostream>
#include <vector>

using namespace std;
int main()
{
    string s{"0000000000"};
    for (char s1 : s)
	{
		if (s1 == '0')
		{
			s.pop_back();
		}
		else
		{
			break;
		}
	}
    for(auto s2:s)
    {
        cout << s2 << endl;
    }
}