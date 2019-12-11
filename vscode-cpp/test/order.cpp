#include <iostream>

using namespace std;

class A
{
public:
    A(int a, int b) : x(a), y(b)
    {
        cout << "AAAAA" << endl;
    }
    void print()
    {
        cout << "A.x=" << x << "A.y=" << y << endl;
    }
    ~A()
    {
        cout << "~A()" << endl;
    }

private:
    int x;
    int y;
};

class B
{
    public:
    B(int c):x(c),a(99,99)
    {
        cout << "BBBBB" << endl;
    }
    void print()
    {
        cout << "B.x=" << x << endl;
    }
    ~B()
    {
        cout << "~B()" << endl;
    }
    private:
        int x;
        A a;
};

int main()
{
    A a(1,1);
    a.print();
    B b(2);
    b.print();

    return 0;
}
