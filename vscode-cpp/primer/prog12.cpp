#include <cctype>
#include <cstring>
#include <fstream>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;
// "---------------------------------------------------------------------------------------"
class StrBlobPtr;
class StrBlob
{
    friend class StrBlobPtr;

public:
    typedef vector<string>::size_type size_type;
    StrBlob();
    StrBlob(initializer_list<string> il);

    StrBlob(const StrBlob &);
    StrBlob &operator=(const StrBlob &);

    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    void push_back(const string &t) { data->push_back(t); }
    void pop_back();
    string &front();
    string &back();
    const string &front() const;
    const string &back() const;
    StrBlobPtr begin();
    StrBlobPtr end();

private:
    shared_ptr<vector<string>> data;
    void check(size_type i, const string &msg) const;
};
StrBlob::StrBlob() : data(make_shared<vector<string>>()) {}
StrBlob::StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)) {}

// value
StrBlob::StrBlob(const StrBlob &sb)
{
    data = make_shared<vector<string>>(*sb.data);
}
StrBlob &StrBlob::operator=(const StrBlob &sb)
{
    data = make_shared<vector<string>>(*sb.data);
    return *this;
}

void StrBlob::check(size_type i, const string &msg) const
{
    if (i >= data->size())
    {
        throw out_of_range(msg);
    }
}
void StrBlob::pop_back()
{
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}
string &StrBlob::front()
{
    check(0, "front on empty StrBlob");
    return data->front();
}
string &StrBlob::back()
{
    check(0, "back on empty StrBlob");
    return data->back();
}
const string &StrBlob::front() const
{
    check(0, "front on empty StrBlob");
    return data->front();
}
const string &StrBlob::back() const
{
    check(0, "back on empty StrBlob");
    return data->back();
}
// "---------------------------------------------------------------------------------------"
class StrBlobPtr
{
public:
    StrBlobPtr() : curr(0) {}
    StrBlobPtr(StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) {}
    string &deref() const;
    StrBlobPtr &incr();
    bool equal_ptr(const StrBlobPtr &);

private:
    shared_ptr<vector<string>> check(size_t, const string &) const;
    weak_ptr<vector<string>> wptr;
    size_t curr;
};
shared_ptr<vector<string>> StrBlobPtr::check(size_t i, const string &msg) const
{
    auto ret = wptr.lock();
    if (!ret)
    {
        throw runtime_error("unbound StrBlobPtr");
    }
    if (i >= ret->size())
    {
        throw out_of_range(msg);
    }
    return ret;
}
string &StrBlobPtr::deref() const
{
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
}
StrBlobPtr &StrBlobPtr::incr()
{
    check(curr, "increment past end of StrBlobPtr");
    ++curr;
    return *this;
}
bool StrBlobPtr::equal_ptr(const StrBlobPtr &ptr)
{
    return ptr.curr != this->curr;
}
StrBlobPtr StrBlob::begin()
{
    return StrBlobPtr(*this);
}
StrBlobPtr StrBlob::end()
{
    auto ret = StrBlobPtr(*this, data->size());
    return ret;
}
// "---------------------------------------------------------------------------------------"
void read(vector<int> *);
void print(vector<int> *);
void read(shared_ptr<vector<int>>);
void print(shared_ptr<vector<int>>);
// "---------------------------------------------------------------------------------------"
int main(int argc, char *argv[])
{
    cout << "----------------------------------------------" << endl;
    allocator<string> alloc;
    auto const ap = alloc.allocate(10);
    auto aq = ap;
    alloc.construct(aq++, "start");
    alloc.construct(aq++, 10, 'c');
    alloc.construct(aq++, "hi");
    cout << *ap << endl;
    // cout << *aq << endl;
    while (aq != ap)
    {
        alloc.destroy(--aq);
    }
    alloc.deallocate(ap, 10);
    cout << "----------------------------------------------" << endl;
    vector<string> ivec{"1", "2", "3", "4", "5", "666"};
    auto app = alloc.allocate(ivec.size() * 2);
    auto aqq = uninitialized_copy(ivec.begin(), ivec.end(), app);
    uninitialized_fill_n(aqq, ivec.size(), "42");
    for (auto p = app; p != aqq; p++)
    {
        cout << *p << " | ";
    }
    cout << endl;
    while (aqq != app)
    {
        alloc.destroy(--aqq);
    }
    alloc.deallocate(app, ivec.size() * 2);
    cout << "----------------------------------------------" << endl;
    cin.clear();
    string *const sp = new string[10];
    string ss;
    string *sq = sp;
    while (cin >> ss && sq != sp + 10)
    {
        *sq++ = ss;
    }
    const size_t sz = sq - sp;
    for (int i = 0; i < sz; i++)
    {
        cout << *(sp + i) << " | ";
    }
    cout << endl;
    delete[] sp;
    cout << "----------------------------------------------" << endl;
    cin.clear();
    auto const asp = alloc.allocate(10);
    auto asq = asp;
    string ass;
    while (cin >> ass && asq != asp + 10)
    {
        alloc.construct(asq++, ass);
    }
    for (auto i = asp; i != asq; i++)
    {
        cout << *i << " | ";
    }
    cout << endl;
    while (asq != asp)
    {
        alloc.destroy(--asq);
    }
    alloc.deallocate(app, 10);
    cout << "----------------------------------------------" << endl;
    cin.clear();
    char *cc = new char[2];
    string ci;
    cin >> ci;
    strcpy(cc, ci.c_str());
    cout << cc << endl;
    delete[] cc;
    cout << "----------------------------------------------" << endl;
    // int *pia = new int[10]();
    const char *ca = "11111";
    const char *cb = "22222";
    string as("first");
    string bs("two");
    char *cp = new char[strlen(ca) + strlen(cb) + 1];
    strcpy(cp, ca);
    strcat(cp, cb);
    cout << cp << endl;
    strcpy(cp, (as + bs).c_str());
    cout << cp << endl;
    delete[] cp;
    cout << "----------------------------------------------" << endl;
    unique_ptr<int> p7(new int(1024));
    // unique_ptr<int> p8(p7);
    auto p9 = unique_ptr<int>();
    // p9 = p7;
    cout << "----------------------------------------------" << endl;
    // int *p4 = new int(1024);
    auto p5(make_shared<int>());
    // auto p6 = p5.get();
    // delete p6;
    // shared_ptr<int>(p4);
    cout << "----------------------------------------------" << endl;
    // const int *pci = new const int(1024);
    // int *p3 = new (nothrow) int;
    vector<int> *v1(new vector<int>());
    shared_ptr<vector<int>> v2(make_shared<vector<int>>());
    read(v1);
    print(v1);
    delete v1;
    cout << endl;
    read(v2);
    print(v2);
    cout << endl;
    cout << "----------------------------------------------" << endl;
    shared_ptr<int> p1 = make_shared<int>(42);
    cout << p1.use_count() << endl;
    auto p2(p1);
    cout << p1.use_count() << endl;
    cout << "----------------------------------------------" << endl;
    ifstream in("./primer/prog12.txt");
    if (in)
    {
        StrBlob words;
        string word;
        while (getline(in, word))
        {
            words.push_back(word);
        }
        in.close();
        StrBlobPtr output = StrBlobPtr(words);
        StrBlobPtr start = words.begin();
        while (start.equal_ptr(words.end()))
        {
            cout << start.deref() << " | ";
            start.incr();
        }
    }
    else
    {
        throw runtime_error("file open failed!");
    }
    cout << endl;
    cout << "----------------------------------------------" << endl;
    return 0;
}
// "---------------------------------------------------------------------------------------"
bool b()
{
    int *p = new int;
    return p;
}
// "---------------------------------------------------------------------------------------"
void read(vector<int> *v)
{
    int num;
    cin.clear();
    while (cin >> num)
    {
        v->push_back(num);
    }
}
void print(vector<int> *v)
{
    for (int i : *v)
    {
        cout << i << " | ";
    }
}
void read(shared_ptr<vector<int>> v)
{
    int num;
    cin.clear();
    while (cin >> num)
    {
        v->push_back(num);
    }
}
void print(shared_ptr<vector<int>> v)
{
    for (int i : *v)
    {
        cout << i << " | ";
    }
}
// "---------------------------------------------------------------------------------------"
