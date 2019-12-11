#include <iostream>

using namespace std;

class Base
{
public:
    virtual void f()
    {
        cout << "Base::f" << endl;
    }
    virtual void g()
    {
        cout << "Base::g" << endl;
    }
    virtual void h()
    {
        cout << "Base::h" << endl;
    }
};

class Derive : public Base
{
public:
    void f()
    {
        cout << "Derive::f" << endl;
    }
    void g1()
    {
        cout << "Derive::g" << endl;
    }
};

int main()
{
    typedef void (*Fun)(void);
    Base *b = new Derive();
    // Base b;
    Fun pFun = NULL;
    cout << "The virtual table address:" << (int *)(b) << endl;
    cout << "The first fun address in the table:" << (int *)*(int *)(b) << endl;
    pFun = (Fun) * ((int *)*(int *)(b));
    pFun();
    b->f();
}