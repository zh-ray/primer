#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
class A
{
public:
    virtual void func(int val = 1)
    {
        cout << "A" << val << endl;
    }
    virtual void test()
    {
        func();
    }
};
class B : public A
{
public:
    void func(int val = 0)
    {
        cout << "B" << val << endl;
    }
};
void combine(string str, string &result, int k)
{
    if (k == 0)
    {
        cout << result << endl;
    }
    else
    {
        for (size_t i = 0; i <= str.size() - k; i++)
        {
            result.push_back(str[i]);
            combine(str.substr(i + 1, str.size()), result, k - 1);
            result.pop_back();
        }
    }
}
int main()
{
    string str{"abcdefg"};
    string result;
    // combine(str, result, 3);
    char *c[10];
    cout << sizeof(c) << endl;
    B *p = new B;
    p->test();
    int a = 1, b = 32;
    cout << a + (++b) << endl;
    cout << (a << b) << endl;
    cout << str << endl;
    str.resize(3, 'Z');
    cout << str << endl;
    return 0;
}