#include <algorithm>
#include <fstream>
#include <iostream>
#include <map>
#include <memory>
#include <set>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
// "---------------------------------------------------------------------------------------"
class StrVec
{
public:
    StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) {}
    StrVec(initializer_list<string>);
    StrVec(const StrVec &);
    StrVec &operator=(const StrVec &);
    StrVec(StrVec &&) noexcept;
    StrVec &operator=(StrVec &&) noexcept;

    ~StrVec();

    void push_back(const string &);
    size_t size() const { return first_free - elements; }
    size_t capacity() const { return cap - elements; }
    string *begin() const { return elements; }
    string *end() const { return first_free; }

    void reserve(size_t);
    void resize(size_t, string s = "");
    const string &at(size_t t) { return *(elements + t); }

private:
    allocator<string> alloc;
    void chk_n_alloc()
    {
        if (capacity() == size())
        {
            reallocate();
        }
    }
    pair<string *, string *> alloc_n_copy(const string *, const string *);
    void free();
    void reallocate(size_t t = 0);
    string *elements;
    string *first_free;
    string *cap;
};
StrVec::StrVec(initializer_list<string> il)
{
    auto newdata = alloc_n_copy(il.begin(), il.end());
    elements = newdata.first;
    first_free = cap = newdata.second;
}
StrVec::StrVec(const StrVec &s)
{
    auto newdata = alloc_n_copy(s.begin(), s.end());
    elements = newdata.first;
    first_free = cap = newdata.second;
}
StrVec &StrVec::operator=(const StrVec &rhs)
{
    auto data = alloc_n_copy(rhs.begin(), rhs.end());
    free();
    elements = data.first;
    first_free = cap = data.second;
    return *this;
}
StrVec::StrVec(StrVec &&s) noexcept : elements(s.elements), first_free(s.first_free), cap(s.cap)
{
    s.elements = s.first_free = s.cap = nullptr;
}
StrVec &StrVec::operator=(StrVec &&rhs) noexcept
{
    if (this != &rhs)
    {
        free();
        elements = rhs.elements;
        first_free = rhs.first_free;
        cap = rhs.cap;
        rhs.elements = rhs.first_free = rhs.cap = nullptr;
    }
    return *this;
}
StrVec::~StrVec()
{
    free();
}
void StrVec::push_back(const string &s)
{
    chk_n_alloc();
    alloc.construct(first_free++, s);
}
pair<string *, string *> StrVec::alloc_n_copy(const string *b, const string *e)
{
    auto data = alloc.allocate(e - b);
    return {data, uninitialized_copy(b, e, data)};
}
void StrVec::free()
{
    if (elements)
    {
        /* for (auto p = first_free; p != elements;)
        {
            alloc.destroy(--p);
        } */
        for_each(elements, first_free, [this](string &p) { alloc.destroy(&p); });
        alloc.deallocate(elements, cap - elements);
    }
}
void StrVec::reallocate(size_t t)
{
    size_t newcapacity;
    if (t)
    {
        newcapacity = t;
    }
    else
    {
        newcapacity = size() ? 2 * size() : 1;
    }
    auto newdata = alloc.allocate(newcapacity);
    auto dest = newdata;
    auto elem = elements;
    for (size_t i = 0; i != size(); ++i)
    {
        alloc.construct(dest++, std::move(*elem++));
    }
    free();
    elements = newdata;
    first_free = dest;
    cap = elements + newcapacity;
}
void StrVec::reserve(size_t t)
{
    if (t > capacity())
    {
        reallocate(t);
    }
}
void StrVec::resize(size_t t, string s)
{
    if (t > size())
    {
        if (t > capacity())
        {
            reserve(t);
        }
        for (size_t i = size(); i < t; i++)
        {
            alloc.construct(first_free++, s);
        }
    }
    else
    {
        while (elements + t != first_free)
        {
            alloc.destroy(--first_free);
        }
    }
}
// "---------------------------------------------------------------------------------------"
class QueryResult;
class TextQuery
{
public:
    // using line_no = vector<string>::size_type;
    TextQuery(ifstream &);
    QueryResult query(const string &) const;

private:
    shared_ptr<StrVec> sentence;
    map<string, shared_ptr<set<size_t>>> words;
};
TextQuery::TextQuery(ifstream &infile) : sentence(new StrVec())
{
    string s;
    while (getline(infile, s))
    {
        sentence->push_back(s);
        int no = sentence->size();
        stringstream wstrs(s);
        string w;
        while (wstrs >> w)
        {
            auto &lineno = words[w];
            if (!lineno)
            {
                lineno.reset(new set<size_t>);
            }
            lineno->insert(no);
        }
    }
}
class QueryResult
{
    friend ostream &print(ostream &, const QueryResult &);

public:
    QueryResult(string t, shared_ptr<set<size_t>> n, shared_ptr<StrVec> s) : target(t), lineno(n), sentence(s) {}

private:
    string target;
    shared_ptr<set<size_t>> lineno;
    shared_ptr<StrVec> sentence;
};
QueryResult TextQuery::query(const string &instr) const
{
    shared_ptr<set<size_t>> initset(new set<size_t>);
    auto res = words.find(instr);
    if (res == words.end())
    {
        return QueryResult(instr, initset, sentence);
    }
    else
    {
        return QueryResult(instr, res->second, sentence);
    }
}
ostream &print(ostream &, const QueryResult &);
// "---------------------------------------------------------------------------------------"
void runQueries(ifstream &);
// "---------------------------------------------------------------------------------------"
class String
{
public:
    String() : begin(nullptr), end(nullptr) {}
    String(const char *);
    String(const String &);
    String &operator=(const String &);
    ~String();

    size_t size() { return end - begin; }
    size_t length() { return end - begin - 1; }
    void print();

private:
    allocator<char> alloc;
    char *begin;
    char *end;
    void free();
    pair<char *, char *> alloc_n_copy(const char *, const char *);
};
String::String(const char *c)
{
    auto newdata = alloc_n_copy(c, c + sizeof(c));
    begin = newdata.first;
    end = newdata.second;
}
String::String(const String &s)
{
    auto newdata = alloc_n_copy(s.begin, s.end);
    begin = newdata.first;
    end = newdata.second;
    cout << "copy constructor!" << endl;
}
String &String::operator=(const String &s)
{
    auto newdata = alloc_n_copy(s.begin, s.end);
    free();
    begin = newdata.first;
    end = newdata.second;
    cout << "copy-assignment operator!" << endl;
    return *this;
}
String::~String()
{
    free();
}
void String::print()
{
    cout << begin << endl;
}
void String::free()
{
    if (begin)
    {
        for_each(begin, end, [this](char &c) { alloc.destroy(&c); });
        alloc.deallocate(begin, end - begin);
    }
}
pair<char *, char *> String::alloc_n_copy(const char *begin, const char *end)
{
    auto data = alloc.allocate(end - begin);
    return {data, uninitialized_copy(begin, end, data)};
}
// "---------------------------------------------------------------------------------------"
int main(int argc, char *argv[])
{
    cout << "----------------------------------------------" << endl;
    const char *sptr = "one";
    cout << sptr << endl;
    String str("sptr");
    String str2(str);
    String str3;
    str3 = str2;
    // str.print();
    vector<String> S1{str3};
    cout << "---" << endl;
    S1.push_back(str);
    cout << "----------------------------------------------" << endl;
    StrVec sv;
    sv.push_back("four");
    cout << sv.at(0) << endl;
    cout << sv.size() << endl;
    cout << sv.capacity() << endl;
    cout << "----------------------------------------------" << endl;
    /* ifstream infile("./primer/prog13_39.txt");
    if (infile)
    {
        cout << "file is opened!" << endl;
        string s;
        while (getline(infile, s))
        {
            sv.push_back(s);
        }
        infile.close();
    }
    else
    {
        throw runtime_error("file open failed!");
    }
    for (size_t i = 0; i < sv.size(); i++)
    {
        cout << sv.at(i) << " | ";
    }
    cout << endl; */
    cout << "----------------------------------------------" << endl;
    ifstream infile("./primer/prog12_30.txt");
    if (infile)
    {
        cout << "file is opened!" << endl;
        runQueries(infile);
        infile.close();
    }
    else
    {
        throw runtime_error("file open failed!");
    }
    cout << "----------------------------------------------" << endl;
    return 0;
}
// "---------------------------------------------------------------------------------------"
void runQueries(ifstream &infile)
{
    TextQuery tq(infile);
    while (true)
    {
        cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(cin >> s) || s == "q")
        {
            break;
        }
        print(cout, tq.query(s)) << endl;
    }
}
// "---------------------------------------------------------------------------------------"
ostream &print(ostream &os, const QueryResult &Qptr)
{

    os << Qptr.target << " occurs " << Qptr.lineno->size() << (Qptr.lineno->size() > 1 ? " times" : " time");
    os << endl;
    for (auto i : *(Qptr.lineno))
    {
        os << '\t';
        os << "(line " << i << ") " << Qptr.sentence->at(i - 1) << endl;
    }
    return os;
}
// "---------------------------------------------------------------------------------------"