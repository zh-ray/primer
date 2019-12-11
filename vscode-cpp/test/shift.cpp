#include<iostream>
#include<bitset>

using namespace std;

int main()
{
    short s = -128;
    bitset<16> b(s);
    short s1 = s >> 1;
    bitset<16> b1(s1);
    cout << b << endl;
    cout << s << endl;
    cout << b1 << endl;
    cout << s1 << endl;

    cout << sizeof(int) << endl;

    return 0;
}