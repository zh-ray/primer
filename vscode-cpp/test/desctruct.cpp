#include <iostream>

using namespace std;

class Base
{
public:
    virtual void f()
    {
        cout << "Base::f" << endl;
    }
    virtual ~Base()
    {
        cout << "Desctruct Base" << endl;
    }
};

class Derive : public Base
{
public:
    void f()
    {
        cout << "Derive::f" << endl;
    }
    ~Derive()
    {
        cout << "Desctruct Derive" << endl;
    }
};

int main()
{
    Base *b = new Derive;
    delete b;
    return 0;
}