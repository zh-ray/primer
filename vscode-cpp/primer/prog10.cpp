#include <algorithm>
#include <forward_list>
#include <fstream>
#include <functional>
#include <iostream>
#include <iterator>
#include <list>
#include <numeric>
#include <vector>
using namespace std;
using namespace std::placeholders;
// "---------------------------------------------------------------------------------------"
bool isShorter(const string &, const string &);
// "---------------------------------------------------------------------------------------"
void elimDups(vector<string> &);
// "---------------------------------------------------------------------------------------"
void elimDups(list<string> &);
// "---------------------------------------------------------------------------------------"
bool isLonger5(const string &);
// "---------------------------------------------------------------------------------------"
void biggies(vector<string> &, vector<string>::size_type, ostream & = cout, char = ' ');
// "---------------------------------------------------------------------------------------"
bool check_size(const string &, string::size_type);
// "---------------------------------------------------------------------------------------"
bool check_length(const int &, string::size_type);
// "---------------------------------------------------------------------------------------"
ostream &print(ostream &, const string &, char);
// "---------------------------------------------------------------------------------------"
void writeNum(const string &, const string &, const string &);
// "---------------------------------------------------------------------------------------"
int main(int argc, char *argv[])
{
    cout << "----------------------------------------------" << endl;
    vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<string> n{"1", "2", "3", "4", "5", "6", "7", "8", "9"};
    char c1[] = {'1', '2', '\0'};
    char c2[] = {'3', '4', '5', '\0'};
    char c3[] = {'6', '7', '8', '9', '\0'};
    char c4[] = {'6', '7', '8', '9', '\0'};
    vector<char *> c_1;
    c_1.push_back(c1);
    c_1.push_back(c2);
    c_1.push_back(c3);
    vector<char *> c_2;
    c_2.push_back(c1);
    c_2.push_back(c4);
    cout << accumulate(nums.cbegin(), nums.cend(), 0) << endl;
    cout << accumulate(n.cbegin(), n.cend(), string("")) << endl;
    cout << "----------------------------------------------" << endl;
    string a("abc");
    string b("abcd");
    if (equal(c_1.begin(), c_1.end(), c_2.begin()))
    {
        cout << "true!" << endl;
    }
    else
    {
        cout << "false!" << endl;
    }
    cout << (void *)c_1.front() << " | " << (void *)c_2[0] << endl;
    cout << "----------------------------------------------" << endl;
    fill(nums.begin(), nums.begin() + nums.size() / 2, 0);
    auto it_back = back_inserter(nums);
    *it_back = 42;
    fill_n(back_inserter(nums), 2, 0);
    for (int a : nums)
    {
        cout << a << " | ";
    }
    cout << endl;
    cout << "----------------------------------------------" << endl;
    int a1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int a2[9];
    auto ret = copy(begin(a1), end(a1), a2 + 2);
    for (int a : a2)
    {
        cout << a << " | ";
    }
    cout << endl;
    cout << *(--ret) << endl;
    cout << "----------------------------------------------" << endl;
    vector<int> c_vec;
    replace_copy(nums.begin(), nums.end(), back_inserter(c_vec), 0, 42);
    for (int a : c_vec)
    {
        cout << a << " | ";
    }
    cout << endl;
    cout << "----------------------------------------------" << endl;
    vector<string> words{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    elimDups(words);
    for (const auto &s : words)
    {
        cout << s << " | ";
    }
    cout << endl;
    stable_sort(words.begin(), words.end(), isShorter);
    // stable_sort(words.begin(), words.end(), [](const string &a, const string &b) { return a.size() < b.size(); });
    for (const auto &s : words)
    {
        cout << s << " | ";
    }
    cout << endl;
    cout << "----------------------------------------------" << endl;
    auto end_longer = partition(words.begin(), words.end(), isLonger5);
    for (auto i = words.begin(); i != end_longer; i++)
    {
        cout << *i << " | ";
    }
    cout << endl;
    cout << "----------------------------------------------" << endl;
    auto f = [](int a, int b) -> int { return a + b; };
    cout << f(1, 2) << " | ";
    int b2 = 2;
    auto f2 = [b2](int a) -> int { return a + b2; };
    b2 = 200;
    cout << f2(1) << " | ";
    auto f3 = [=]() mutable { return ++b2; };
    cout << f3() << " | " << b2 << " | ";
    cout << endl;
    vector<int> numss{1, -1, 2, -3, 4, -56, 78, -9};
    vector<int> numsss(7);
    transform(numss.begin(), numss.end(), numsss.begin(), [](int i) { return i > 0 ? i : -i; });
    for_each(numsss.begin(), numsss.end(), [](const int &i) { cout << i << " | "; });
    cout << endl;
    auto counts = count_if(numss.begin(), numss.end(), [](const int &i) { return i < 6; });
    cout << counts << endl;
    int ab = 0;
    auto f4 = [&]() mutable -> bool {if(ab == 0) return true; while (--ab){}; return false; };
    cout << f4() << " | " << ab << endl;
    cout << "----------------------------------------------" << endl;
    vector<string> words2{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    biggies(words2, 5);
    cout << "----------------------------------------------" << endl;
    auto check6 = bind(check_size, _1, 6);
    string sc = "hello";
    cout << check6(sc) << endl;
    cout << "----------------------------------------------" << endl;
    for_each(words2.begin(), words2.end(), bind(print, ref(cout), _1, '|'));
    cout << endl;
    cout << "----------------------------------------------" << endl;
    string wo("123");
    sort(numsss.end(), numsss.end());
    auto res = find_if(numsss.begin(), numsss.end(), bind(check_length, _1, wo.size()));
    cout << *res << endl;
    cout << "----------------------------------------------" << endl;
    vector<string> words3{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    list<string> list1;
    sort(words3.begin(), words3.end());
    unique_copy(words3.begin(), words3.end(), back_inserter(list1));
    for (const auto &s : list1)
    {
        cout << s << " | ";
    }
    cout << endl;
    cout << "----------------------------------------------" << endl;
    vector<int> num1{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    vector<int> num2;
    list<int> num3;
    vector<int> num4;
    copy(num1.begin(), num1.end(), back_inserter(num2));
    copy(num1.begin(), num1.end(), front_inserter(num3));
    copy(num1.begin(), num1.end(), inserter(num4, num4.begin()));
    for_each(num2.begin(), num2.end(), [](const int &i) { cout << i << " | "; });
    cout << endl;
    for_each(num3.begin(), num3.end(), [](const int &i) { cout << i << " | "; });
    cout << endl;
    for_each(num4.begin(), num4.end(), [](const int &i) { cout << i << " | "; });
    cout << endl;
    cout << "----------------------------------------------" << endl;
    istream_iterator<int> int_iter(cin);
    istream_iterator<int> int_eof;
    ostream_iterator<int> int_out(cout, " | ");
    vector<int> int_num(int_iter, int_eof);
    sort(int_num.begin(), int_num.end());
    unique_copy(int_num.begin(), int_num.end(), int_out);
    cout << endl;
    cout << "----------------------------------------------" << endl;
    cin.clear();
    istream_iterator<int> in_iter(cin);
    istream_iterator<int> eof;
    ostream_iterator<int> out_iter(cout, " | ");
    // cout << accumulate(in_iter, eof, 0) << endl;
    vector<int> in_vec(in_iter, eof);
    /*  vector<int> in_vec;
    while (in_iter != eof)
    {
        in_vec.push_back(*in_iter++);
    } */
    for_each(in_vec.begin(), in_vec.end(), [](const int &i) { cout << i << " | "; });
    cout << endl;
    for (auto e : in_vec)
    {
        out_iter = e;
    }
    cout << endl;
    copy(in_vec.begin(), in_vec.end(), out_iter);
    cout << endl;
    cout << "----------------------------------------------" << endl;
    ifstream in("./primer/prog10.txt");
    vector<string> fwords;
    ostream_iterator<string> out_fiter(cout, " | ");
    if (in)
    {
        istream_iterator<string> in_fiter(in);
        istream_iterator<string> f_eof;
        while (in_fiter != f_eof)
        {
            fwords.push_back(*in_fiter++);
        }
        in.close();
    }
    else
    {
        throw runtime_error("file open failed!");
    }
    copy(fwords.begin(), fwords.end(), out_fiter);
    cout << endl;
    cout << "----------------------------------------------" << endl;
    string in_file = "./primer/prog10_num.txt";
    string even_file = "./primer/prog10_even.txt";
    string odd_file = "./primer/prog10_odd.txt";
    writeNum(in_file, even_file, odd_file);
    cout << "----------------------------------------------" << endl;
    string istr("FIRST,SECOND,THIRD");
    auto comma = find(istr.crbegin(), istr.crend(), ',');
    // cout << string(istr.crbegin(), comma) << endl;
    cout << string(comma.base(), istr.cend()) << endl;
    cout << *istr.rend().base() << endl;
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    for_each(ivec.crbegin(), ivec.crend(), [](const int &i) { cout << i << " | "; });
    cout << endl;
    list<int> ilist(10);
    copy(ivec.crbegin() + 2, ivec.crend() - 3, ilist.begin());
    for_each(ilist.cbegin(), ilist.cend(), [](const int &i) { cout << i << " | "; });
    cout << endl;
    cout << "----------------------------------------------" << endl;
    forward_list<string> flst1{"one", "two", "three", "four", "five"};
    forward_list<string> flst2{"1", "2", "3", "4", "5"};
    list<string> lst1{"one", "two", "three", "four", "five"};
    list<string> lst2{"1", "2", "3", "4", "5"};
    // cout << *(++lst2.begin()) << endl;
    /* lst1.splice(lst1.end(), lst2);
    flst1.splice_after(flst1.begin(), flst2); */
    lst1.splice(lst1.begin(), lst2, lst2.begin());
    for_each(flst1.cbegin(), flst1.cend(), [](const string &i) { cout << i << " | "; });
    cout << endl;
    for_each(lst1.cbegin(), lst1.cend(), [](const string &i) { cout << i << " | "; });
    cout << endl;
    for_each(lst2.cbegin(), lst2.cend(), [](const string &i) { cout << i << " | "; });
    cout << endl;
    cout << "----------------------------------------------" << endl;
    list<string> lst{"1", "one", "1", "two", "one", "2", "3", "three", "3"};
    elimDups(lst);
    for_each(lst.cbegin(), lst.cend(), [](const string &i) { cout << i << " | "; });
    cout << endl;
    cout << "----------------------------------------------" << endl;
    return 0;
}
// "---------------------------------------------------------------------------------------"
void writeNum(const string &input, const string &output_even, const string &output_odd)
{
    ifstream in(input);
    ofstream out_even(output_even);
    ofstream out_odd(output_odd);
    if (in && out_odd && out_even)
    {
        istream_iterator<int> in_iter(in);
        istream_iterator<int> eof;
        vector<int> nums(in_iter, eof);
        ostream_iterator<int> even_iter(out_even, "\n");
        ostream_iterator<int> odd_iter(out_odd, " ");
        for (auto i : nums)
        {
            if ((i & 1) == 0)
            {
                *even_iter++ = i;
            }
            else
            {
                *odd_iter++ = i;
            }
        }
        in.close();
        out_even.close();
        out_odd.close();
    }
    else
    {
        throw runtime_error("input file open failed!");
    }
}
// "---------------------------------------------------------------------------------------"
ostream &print(ostream &os, const string &str, char c)
{
    return os << str << c;
}
// "---------------------------------------------------------------------------------------"
bool check_length(const int &s, string::size_type sz)
{
    return s > sz;
}
// "---------------------------------------------------------------------------------------"
bool check_size(const string &s, string::size_type sz)
{
    return s.size() >= sz;
}
// "---------------------------------------------------------------------------------------"
void biggies(vector<string> &words, vector<string>::size_type sz, ostream &os, char c)
{
    elimDups(words);
    stable_sort(words.begin(), words.end(), [](const string &a, const string &b) { return a.size() < b.size(); });
    // auto wc = find_if(words.begin(), words.end(), [sz](const string &a) { return a.size() >= sz; });
    // auto wc = find_if(words.begin(), words.end(), [=](const string &a) { return a.size() >= sz; });
    // auto wc = find_if(words.begin(), words.end(), bind(check_size, _1, sz));
    // auto wc = partition(words.begin(), words.end(), [sz](const string &a) { return a.size() >= sz; });
    auto wc = partition(words.begin(), words.end(), bind(check_size, _1, sz));
    auto count = wc - words.begin();
    cout << count << endl;
    // for_each(words.begin(), wc, [](const string &s) { cout << s << " "; });
    // for_each(words.begin(), wc, [&os, c](const string &s) { os << s << c; });
    for_each(words.begin(), wc, [&, c](const string &s) { os << s << c; });
    cout << endl;
}
// "---------------------------------------------------------------------------------------"
bool isLonger5(const string &str)
{
    return str.size() >= 5;
}
// "---------------------------------------------------------------------------------------"
bool isShorter(const string &a, const string &b)
{
    return a.size() < b.size();
}
// "---------------------------------------------------------------------------------------"
void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    // cout << *(words.end() - 2) << endl;
    /* for (string s : words)
    {
        cout << s << " | ";
    }
    cout << endl; */
    words.erase(end_unique, words.end());
}
// "---------------------------------------------------------------------------------------"
void elimDups(list<string> &words)
{
    words.sort();
    words.unique();
}
// "---------------------------------------------------------------------------------------"