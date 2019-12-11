#include <cstring>
#include <initializer_list>
#include <iostream>
#include <vector>

#define NDEBUG

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int find_char(const string &s, char c, int &occurs)
{
    int res = s.size();
    occurs = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == c)
        {
            if (res == s.size())
            {
                res = i;
            }
            ++occurs;
        }
    }
    return res;
}

void error_msg(initializer_list<string> il)
{
    for (auto beg = il.begin(); beg != il.end(); beg++)
    {
        cout << *beg << endl;
    }
    cout << endl;
}

/* const string &manip()
{
    string ret;
    string a{"Empty"};
    if (ret.empty())
    {
        return NULL;
    }
    else
    {
        return a;
    }
} */

char &get_val(string &str, string::size_type ix)
{
    return str[ix];
}

string process()
{
    string expected{"123567"};
    string actual{"123567"};
    if (expected.empty())
    {
        return {};
    }
    else if (expected != actual)
    {
        return {"functionX"};
    }
    else
    {
        return {"function", "okay"}; // 逗号运算符
    }
}

void Get_val(vector<int> &nums, int idx)
{
#ifndef NDEBUG
    cout << nums.size() << endl;
#endif
    if (idx != nums.size())
    {
        cout << nums[idx] << " ";
        idx++;
        Get_val(nums, idx);
    }
    return;
}

int (*func())[10]
{
    static int a[10] = {1, 2};
    return &a;
}

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};
decltype(odd) *arrPtr(int i)
{
    return (i % 2) ? &odd : &even;
}

string (&str())[10];

using arrT = string[10];
arrT &str();

auto arrT2() -> string (&)[10];

string arrT3[10];
decltype(arrT3) &arrT4();

string screen(int, int, char = ' ');
string screen(int = 24, int = 23, char);

using sz = string::size_type;
sz wd = 80;
char def = ' ';
sz ht();
string screen(sz = ht(), sz = wd, char = def);

string make_plural(size_t ctr, const string &word, const string ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}

constexpr int new_ze()
{
    return 42;
}

void f();
void f(int)
{
    cout << 1 << endl;
}
void f(int, int);
void f(double, double = 3.14);

int calc(char *, char *);
int calc(char *const, char *cosnt);

bool lengthCompare(const string &, const string &)
{
    cout << "lengthCompare" << endl;
    return false;
}
bool (*pf)(const string &, const string &);

void useBigger(const string &, const string &, bool (*pf)(const string &, const string &));

int fun6_54(int, int)
{
    cout << "FunPtr" << endl;
    return 0;
}
int add(int a, int b)
{
    return a + b;
}
int subtr(int a, int b)
{
    return a - b;
}
int multip(int a, int b)
{
    return a * b;
}
int divis(int a, int b)
{
    return b != 0 ? a / b : 0;
}

int main(int argc, char *argv[])
{
    int a = 3;
    int b = 6;
    swap(&a, &b);
    cout << a << "-" << b << endl;
    cout << "----------------------------------------------" << endl;
    string s{"123dfsadf4545lkjgalioqt989283ajinjdkaioudhfq0293"};
    char c = 'a';
    int occurs;
    int res = find_char(s, c, occurs);
    cout << res + 1 << "---" << occurs << endl;
    cout << "----------------------------------------------" << endl;
    string str;
    for (int i = 1; i < argc; i++)
    {
        str += argv[i];
        str += " ";
    }
    cout << str << endl;
    cout << "----------------------------------------------" << endl;
    string expected{"123567"};
    string actual{"1234567"};
    if (expected != actual)
    {
        error_msg({"functionX", expected, actual});
    }
    else
    {
        error_msg({"functionX", "okay"});
    }
    cout << "----------------------------------------------" << endl;
    cout << s << endl;
    get_val(s, 0) = 'A';
    cout << s << endl;
    cout << "----------------------------------------------" << endl;
    cout << process() << endl;
    cout << "----------------------------------------------" << endl;
    vector<int> nums{1, 2, 4, 3, 5, 6};
    Get_val(nums, 0);
    cout << endl;
    cout << "----------------------------------------------" << endl;
    cout << (*func())[1] << endl;
    cout << "----------------------------------------------" << endl;
    cout << *(*arrPtr(1) + 1) << endl;
    cout << "----------------------------------------------" << endl;
    // int con = 1;
    // int *cons = &con;
    // const int *con_ptr = cons;
    // int mf = 20;
    // constexpr int limit = mf + 1;
    string word("123");
    if (word.size() < 8)
    {
        cerr << "Error:" << __FILE__ << " : in function " << __func__ << " at line " << __LINE__ << endl
             << "        Compiled on " << __DATE__ << " at " << __TIME__ << endl
             << "        Word read was \"" << word << "\": Length too short" << endl;
    }
    cout << "----------------------------------------------" << endl;
    // f(42, 2.56);
    f(42);
    cout << "----------------------------------------------" << endl;
    //vector<decltype(fun6_54) *> funs;
    vector<int (*)(int, int)> funs;
    funs.push_back(fun6_54);
    funs.push_back(add);
    funs.push_back(subtr);
    funs.push_back(multip);
    funs.push_back(divis);
    for (auto f : funs)
    {
        cout << f(4, 2) << endl;
    }
    cout << "----------------------------------------------" << endl;
    return 0;
}
