#include <iostream>
#include <map>
#include <vector>
using namespace std;

// "--------------------------------------------------------------------------------------------------------"

struct Sales_data
{
    friend Sales_data add(const Sales_data &, const Sales_data &);
    friend ostream &print(ostream &, const Sales_data &);
    friend istream &read(istream &, Sales_data &);

public:
    Sales_data() = default;
    explicit Sales_data(const string &s) : bookNo(s) {}
    // Sales_data(string s = "") : bookNo(s) {}
    Sales_data(const string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p * n)
    {
        cout << "main";
    }
    explicit Sales_data(istream &);
    // Sales_data() : Sales_data("", 0, 0)
    // {
    //     cout << "default";
    // }
    // Sales_data(string s) : Sales_data(s, 0, 0)
    // {
    //     cout << "string s";
    // }
    // Sales_data(istream &is) : Sales_data()
    // {
    //     read(is, *this);
    //     cout << "istream &is";
    // }
    // Sales_data(unsigned n) : units_sold(n) {}

    string isbn() const
    {
        return this->bookNo;
    }
    Sales_data &combine(const Sales_data &);

private:
    double avg_price() const;
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data &, const Sales_data &);
ostream &print(ostream &, const Sales_data &);
istream &read(istream &, Sales_data &);

Sales_data::Sales_data(istream &is)
{
    read(is, *this);
}

double Sales_data::avg_price() const
{
    return units_sold == 0 ? 0 : revenue / units_sold;
}

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

istream &read(istream &is, Sales_data &item)
{
    double price = 0.0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

// "--------------------------------------------------------------------------------------------------------"

class Screen
{
    friend class Window_mgr;

public:
    typedef string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
    char get() const
    {
        return contents[cursor];
    }
    inline char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);
    Screen &set(char);
    Screen &set(pos, pos, char);
    Screen &display(ostream &os)
    {
        do_display(os);
        return *this;
    }
    const Screen &display(ostream &os) const
    {
        do_display(os);
        return *this;
    }

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
    void do_display(ostream &os) const
    {
        os << contents;
    }
};

inline Screen &Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}
inline Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}
inline Screen &Screen::set(pos ht, pos wd, char c)
{
    pos row = ht * width;
    contents[row + wd] = c;
    return *this;
}
char Screen::get(pos ht, pos wd) const
{
    pos row = ht * width;
    return contents[row + wd];
}

// "--------------------------------------------------------------------------------------------------------"

class Window_mgr
{
public:
    using ScreenIndex = vector<Screen>::size_type;
    void clear(ScreenIndex);
    ScreenIndex addScreen(const Screen &);

private:
    vector<Screen> screens{Screen(24, 80, ' ')};
};

void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = string(s.height * s.width, ' ');
}

Window_mgr::ScreenIndex Window_mgr::addScreen(const Screen &s)
{
    screens.push_back(s);
    return screens.size() - 1;
}

// "--------------------------------------------------------------------------------------------------------"
// No Error, but it's wrong: the return type of balance() is double, the type of bal is int!!!
typedef double Money;
class Account
{
public:
    Money balance()
    {
        return bal;
    }

private:
    typedef int Money;
    Money bal;
};

// "--------------------------------------------------------------------------------------------------------"

typedef string Type;
Type initVal();
class Exercise
{
public:
    typedef double Type;
    Type setVal(Type);
    Type initVal()
    {
        return 1;
    };

private:
    int val;
};
Exercise::Type Exercise::setVal(Type parm)
{
    val = parm + initVal();
    return val;
}

// "--------------------------------------------------------------------------------------------------------"

class NoDefault
{
public:
    NoDefault(int) {}
};
class C
{
public:
    C() : nodefault(0) {}

private:
    NoDefault nodefault;
};

// "--------------------------------------------------------------------------------------------------------"

class Person
{
    friend istream &read(istream &is, Person &person);
    friend ostream &print(ostream &is, Person &person);

private:
    string name;
    string address;

public:
    Person() = default;
    Person(const string &n, const string &a) : name(n), address(a) {}

    string getName() const
    {
        return name;
    }
    string getAddress() const
    {
        return address;
    }
};

istream &read(istream &is, Person &person)
{
    is >> person.name >> person.address;
    return is;
}
ostream &print(ostream &os, Person &person)
{
    os << person.name << " " << person.address;
    return os;
}

// "--------------------------------------------------------------------------------------------------------"

class Debug
{
public:
    constexpr Debug(bool b = true) : hw(b), io(b), other(b) {}
    constexpr Debug(bool h, bool i, bool o) : hw(h), io(i), other(o) {}
    constexpr bool any() { return hw || io || other; }
    void set_hw(bool b) { hw = b; }
    void set_io(bool b) { io = b; }
    void set_other(bool b) { other = b; }

private:
    bool hw;    // hardware error
    bool io;    // io error
    bool other; // other error
};

// "--------------------------------------------------------------------------------------------------------"

class Accounts
{
public:
    void calculate() { amount += amount * interestRate; }
    static double rate() { return interestRate; }
    static void rate(double);

private:
    string owner;
    double amount;
    static double interestRate;
    static double initRate() { return 0.0; }

    // static Accounts a1;
    // Accounts *a2;
    // Accounts a3;

    // static double r = 6.5; // error by the non-constexpr
    // constexpr static double r = interestRate; error by the initial value which is non-constexpr
};

void Accounts::rate(double newRate)
{
    interestRate = newRate;
}
double Accounts::interestRate = initRate();

// "--------------------------------------------------------------------------------------------------------"

class Example
{
public:
    // static double rate = 6.5;
    static double rate;
    static const int vecSize = 20;
    // static vector<double> vec(vecSize);
    static vector<double> vec;
};

// double Example::rate;
double Example::rate = 6.5;
const int Example::vecSize;
// vector<double> Example::vec;
vector<double> Example::vec(vecSize);

// "--------------------------------------------------------------------------------------------------------"

int main()
{
    cout << "----------------------------------------------" << endl;
    Sales_data a;
    cout << endl;
    Sales_data b("123");
    cout << endl;
    Sales_data c("123", 1, 1);
    cout << endl;
    Sales_data d(cin);
    cout << "----------------------------------------------" << endl;
    Sales_data item;
    string null_book = "99-99";
    // because of the explicit key word!!!
    // item.combine(null_book);
    item.combine(static_cast<Sales_data>(cin));
    Sales_data item1("99-99");
    Sales_data item2(null_book);
    cout << "----------------------------------------------" << endl;
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(cout);
    cout << endl;
    myScreen.display(cout);
    cout << endl;
    cout << "----------------------------------------------" << endl;
    return 0;

    if (cin)
    {
        Sales_data total(cin);
        if (cin)
        {
            Sales_data trans(cin);
            do
            {
                if (trans.isbn() == total.isbn())
                {
                    total.combine(trans);
                }
                else
                {
                    print(cout, total) << endl;
                    total = trans;
                }
            } while (read(cin, trans));
        }
        print(cout, total) << endl;
    }
    else
    {
        cout << "No data?" << endl;
        return -1;
    }
    return 0;
}