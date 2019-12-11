#include <array>
#include <deque>
#include <forward_list>
#include <fstream>
#include <iostream>
#include <list>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

// "---------------------------------------------------------------------------------------"
void funl(forward_list<string> &, string, string);
// "---------------------------------------------------------------------------------------"
void even_odd(vector<int> &);
// "---------------------------------------------------------------------------------------"
void even_odd(list<int> &);
// "---------------------------------------------------------------------------------------"
void even_odd(forward_list<int> &);
// "---------------------------------------------------------------------------------------"
void rep(string &, string, string);
// "---------------------------------------------------------------------------------------"
void reps(string &, string, string);
// "---------------------------------------------------------------------------------------"
void repiter(string &, string, string);
// "---------------------------------------------------------------------------------------"
void name(string &, string, string);
// "---------------------------------------------------------------------------------------"
void names(string &, string, string);
// "---------------------------------------------------------------------------------------"
class Times
{
public:
    Times() : year(1970), month(1), day(1) {}
    Times(const string &s)
    {
        int format = 3;
        string number("0123456789");
        // 1.January 1,1900
        // 2.1/1/1990
        // 3.Jan 1 1900
        if (s.find_first_of(',') != string::npos)
        {
            format = 1;
        }
        else if (s.find_first_of('/') != string::npos)
        {
            format = 2;
        }

        switch (format)
        {
        case 1:
            month = months(s);
            day = stoi(s.substr(s.find_first_of(number), s.find_first_of(',') - s.find_first_of(number)));
            year = stoi(s.substr(s.find_last_of(',') + 1));
            break;
        case 2:
            day = stoi(s.substr(0, s.find_first_of('/')));
            month = stoi(s.substr(s.find_first_of('/') + 1, s.find_last_of('/') - s.find_first_of('/')));
            year = stoi(s.substr(s.find_last_of('/') + 1));
            break;
        case 3:
            month = months(s);
            day = stoi(s.substr(s.find_first_of(number), s.find_first_of(' ') - s.find_first_of(number)));
            year = stoi(s.substr(s.find_last_of(' ') + 1));
            break;
        default:
            year = 1970;
            month = 1;
            day = 1;
            break;
        }
    }
    void print()
    {
        // output:1990-1-1
        cout << year << "-" << month << "-" << day << endl;
    }

private:
    unsigned year;
    unsigned month;
    unsigned day;
    unsigned months(const string &s)
    {
        if (s.find("Jan") != string::npos)
        {
            return 1;
        }
        if (s.find("Feb") != string::npos)
        {
            return 2;
        }
        if (s.find("Mar") != string::npos)
        {
            return 3;
        }
        if (s.find("Apr") != string::npos)
        {
            return 4;
        }
        if (s.find("May") != string::npos)
        {
            return 5;
        }
        if (s.find("Jun") != string::npos)
        {
            return 6;
        }
        if (s.find("Jul") != string::npos)
        {
            return 7;
        }
        if (s.find("Aug") != string::npos)
        {
            return 8;
        }
        if (s.find("Sep") != string::npos)
        {
            return 9;
        }
        if (s.find("Oct") != string::npos)
        {
            return 10;
        }
        if (s.find("Nov") != string::npos)
        {
            return 11;
        }
        return 12;
    }
};
// "---------------------------------------------------------------------------------------"
int cal(const string &);
// "---------------------------------------------------------------------------------------"
vector<string> pre_cal(const string &);
// "---------------------------------------------------------------------------------------"
int getPriority(const string &);
// "---------------------------------------------------------------------------------------"
int result(int &, int &, const string &);
// "---------------------------------------------------------------------------------------"

int main(int argc, char *argv[])
{
    cout << "----------------------------------------------" << endl;
    list<string> authors = {"1", "2", "3"};
    vector<const char *> articles = {"a", "b", "c"};

    list<string> list2(authors);
    // deque<string> authList(authors);
    // vector<string> words(articles);
    forward_list<string> words(articles.begin(), articles.end());
    array<int, 5> array1{1, 2, 3};
    array<int, 5> array2{5};
    swap(array1, array2);
    cout << array1[0] << endl;
    cout << "----------------------------------------------" << endl;
    list<int> list1{1, 2, 3, 4, 5, 6};
    vector<double> vec1(list1.begin(), list1.end());
    vector<int> vec2(vec1.begin(), vec1.end());
    cout << "----------------------------------------------" << endl;
    list<const char *> list3{"12", "23", "56"};
    vector<string> vec3{"123"};
    vec3.assign(list3.begin(), list3.end());
    for (auto v : vec3)
    {
        cout << v << " | ";
    }
    cout << endl;
    cout << "----------------------------------------------" << endl;
    auto iter = vec3.insert(vec3.begin(), 2, "hi");
    cout << *(iter + 2) << endl;
    cout << "----------------------------------------------" << endl;
    vector<int>::iterator iter2 = vec2.begin(), mid = vec2.begin() + vec2.size() / 2;
    while (iter2 != mid)
    {
        if (*iter2 == 2)
        {
            iter2 = vec2.insert(iter2, 2 * 2);
            iter2 += 2;
        }
        else
        {
            iter2++;
        }
        mid = vec2.begin() + vec2.size() / 2;
    }
    // vec2.erase(vec2.end(), vec2.end());
    for (int v : vec2)
    {
        cout << v << " | ";
    }
    cout << endl;
    cout << "----------------------------------------------" << endl;
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> vec_ia(ia, ia + 11);
    list<int> list_ia(ia, ia + 11);
    auto vec_iter = vec_ia.begin();
    auto list_iter = list_ia.begin();
    while (vec_iter != vec_ia.end())
    {
        if (*vec_iter % 2 == 0)
        {
            vec_iter = vec_ia.erase(vec_iter);
        }
        else
        {
            ++vec_iter;
        }
    }
    while (list_iter != list_ia.end())
    {
        if (*list_iter % 2 != 0)
        {
            list_iter = list_ia.erase(list_iter);
        }
        else
        {
            ++list_iter;
        }
    }
    for (int i : vec_ia)
    {
        cout << i << " | ";
    }
    cout << endl;
    for (int i : list_ia)
    {
        cout << i << " | ";
    }
    cout << endl;
    cout << "----------------------------------------------" << endl;
    forward_list<int> flst{0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter_flst = flst.insert_after(flst.begin(), {3, 10, 11});
    cout << *(iter_flst) << endl;
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while (curr != flst.end())
    {
        if (*curr % 2)
        {
            curr = flst.erase_after(prev);
        }
        else
        {
            prev = curr;
            ++curr;
        }
    }
    for (int i : flst)
    {
        cout << i << " | ";
    }
    cout << endl;
    cout << "----------------------------------------------" << endl;
    forward_list<string> flst2{"123", "234", "345"};
    string str1("235");
    string str2("456");
    funl(flst2, str1, str2);
    for (string i : flst2)
    {
        cout << i << " | ";
    }
    cout << endl;
    cout << "----------------------------------------------" << endl;
    vector<int> vi{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> vil{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    forward_list<int> vifl{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    even_odd(vi);
    even_odd(vil);
    even_odd(vifl);
    for (int i : vi)
    {
        cout << i << " | ";
    }
    cout << endl;
    for (int i : vil)
    {
        cout << i << " | ";
    }
    cout << endl;
    for (int i : vifl)
    {
        cout << i << " | ";
    }
    cout << endl;
    cout << "----------------------------------------------" << endl;
    auto begin1 = vi.begin();
    while (begin1 != vi.end())
    {
        ++begin1;
        begin1 = vi.insert(begin1, 43);
        ++begin1;
    }
    for (int i : vi)
    {
        cout << i << " | ";
    }
    cout << endl;
    cout << "----------------------------------------------" << endl;
    vector<int> ivec;
    cout << "ivec: size: " << ivec.size()
         << " capacity: " << ivec.capacity() << endl;
    for (int i = 0; i < 24; i++)
    {
        ivec.push_back(i);
    }
    ivec.reserve(50);
    while (ivec.size() != ivec.capacity())
    {
        ivec.push_back(0);
    }
    ivec.push_back(43);
    ivec.shrink_to_fit();
    cout << "ivec: size: " << ivec.size()
         << " capacity: " << ivec.capacity() << endl;
    cout << "----------------------------------------------" << endl;
    vector<char> cvec{'a', 'b', 'c', 'd'};
    string vstr(cvec.begin(), cvec.end());
    cout << vstr << endl;
    cout << "----------------------------------------------" << endl;
    string s("Hello World!");
    string s2("again");
    s.insert(s.size(), 5, '!');
    s.insert(0, s2, 0, s2.size() - 1);
    s.erase(1, 2);
    s.replace(2, 3, "2");
    cout << s << endl;
    cout << "----------------------------------------------" << endl;
    s = "tho a tho b";
    rep(s, "tho", "though");
    reps(s, "though", "tho");
    repiter(s, "tho", "though");
    string name1("jack");
    string name3("jack");
    name(name1, "Mr. ", " III");
    names(name3, "Mr. ", " III");
    cout << name1 << " | " << name3 << endl;
    cout << "----------------------------------------------" << endl;
    string inputs("ab2c3d7R4E6");
    string number("0123456789");
    string alphbet("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
    string::size_type poss = 0;
    while ((poss = inputs.find_first_of(number, poss)) != string::npos)
    {
        cout << inputs[poss] << " | ";
        ++poss;
    }
    cout << endl;
    poss = 0;
    while ((poss = inputs.find_first_not_of(number, poss)) != string::npos)
    {
        cout << inputs[poss] << " | ";
        ++poss;
    }
    cout << endl;
    cout << "----------------------------------------------" << endl;
    string ascender("bdfhijklt");
    string descender("gjpqy");
    string mids("acemnorsuvwxz");
    ifstream in("./primer/prog9.txt");
    int maxSize = 0;
    string maxWord("-");
    if (in)
    {
        string temp;
        while (in >> temp)
        {
            // cout << temp << " | ";
            // if (temp.find_first_of(ascender) == string::npos && temp.find_first_of(descender) == string::npos)
            if (temp.find_first_not_of(mids) == string::npos)
            {
                if (maxSize < temp.size())
                {
                    maxSize = temp.size();
                    maxWord = temp;
                }
            }
        }
    }
    else
    {
        throw runtime_error("file open failed!!!");
    }
    cout << maxWord << endl;
    cout << "----------------------------------------------" << endl;
    vector<string> i_str{"12.3", "24.7", "48.2", "96.8"};
    int sum = 0;
    double sum_d = 0.0;
    for (string i : i_str)
    {
        sum += stoi(i);
    }
    for (string i : i_str)
    {
        sum_d += stod(i);
    }
    cout << 12 + 24 + 48 + 96 << " | " << sum << endl;
    cout << sum_d << endl;
    cout << "----------------------------------------------" << endl;
    Times t1;
    t1.print();
    Times t3("12/2/2019");
    t3.print();
    Times t4("May 4 2003");
    t4.print();
    Times t5("June 24,2020");
    t5.print();
    cout << "----------------------------------------------" << endl;
    string expression("2 * (4 + 5 * (6 - (-1))) / 2 + 6 - (5 - 3) * 2");
    /* vector<string> temp = pre_cal(expression);
    for (string s : temp)
    {
        cout << s << " ";
    }
    cout << endl; */
    cout << 2 * (4 + 5 * (6 - (-1))) / 2 + 6 - (5 - 3) * 2 << " | " << cal(expression) << endl;
    cout << "----------------------------------------------" << endl;
    return 0;
}

// "---------------------------------------------------------------------------------------"
vector<string> pre_cal(const string &str)
{
    vector<string> res;
    string::size_type i = 0;
    while (i < str.size())
    {
        switch (str[i])
        {
        case '(':
        case ')':
        case '+':
        case '*':
        case '/':
            res.push_back(str.substr(i, 1));
            break;
        case '-':
            if (isdigit(str[i + 1]))
            {
                res.push_back("#");
            }
            else
            {
                res.push_back("-");
            }
            break;
        case ' ':
            break;
        default:
            string digit;
            while (i < str.size() && isdigit(str[i]))
            {
                digit.push_back(str[i]);
                i++;
            }
            i--;
            res.push_back(digit);
        }
        i++;
    }
    return res;
}
// "---------------------------------------------------------------------------------------"
int getPriority(const string &op)
{
    if ("#" == op)
    {
        return 3;
    }
    else if ("*" == op || "/" == op)
    {
        return 2;
    }
    else if ("+" == op || "-" == op)
    {
        return 1;
    }
    return 0;
}
// "---------------------------------------------------------------------------------------"
int result(int &a, int &b, const string &op)
{
    if (op == "+")
    {
        return a + b;
    }
    else if (op == "-")
    {
        return a - b;
    }
    else if (op == "*")
    {
        return a * b;
    }
    else
    {
        return a / b;
    }
}
// "---------------------------------------------------------------------------------------"
// (a * (b + c) / d) + e - f * g
int cal(const string &str)
{
    vector<string> expression = pre_cal(str);

    stack<int> num_stack;
    stack<string> op_stack;

    for (string s : expression)
    {
        if (s.find_first_of("0123456789") != string::npos)
        {
            num_stack.push(stoi(s));
        }
        else if (s == "(")
        {
            op_stack.push(s);
        }
        else if (s != ")")
        {
            while (op_stack.size() && getPriority(s) <= getPriority(op_stack.top()))
            {
                if (op_stack.top() == "#")
                {
                    num_stack.top() *= -1;
                }
                else
                {
                    int a = num_stack.top();
                    num_stack.pop();
                    int b = num_stack.top();
                    num_stack.pop();
                    num_stack.push(result(a, b, op_stack.top()));
                }
                op_stack.pop();
            }
            op_stack.push(s);
        }
        else
        {
            while (op_stack.top() != "(")
            {
                if (op_stack.top() == "#")
                {
                    num_stack.top() *= -1;
                }
                else
                {
                    int a = num_stack.top();
                    num_stack.pop();
                    int b = num_stack.top();
                    num_stack.pop();
                    num_stack.push(result(a, b, op_stack.top()));
                }
                op_stack.pop();
            }
            op_stack.pop();
        }
    }
    if (!op_stack.empty())
    {
        int a = num_stack.top();
        num_stack.pop();
        int b = num_stack.top();
        num_stack.pop();
        num_stack.push(result(a, b, op_stack.top()));
    }
    return num_stack.top();
}
// "---------------------------------------------------------------------------------------"
void name(string &s, string pre, string suf)
{
    s.insert(s.begin(), pre.begin(), pre.end());
    s.append(suf);
    return;
}
// "---------------------------------------------------------------------------------------"
void names(string &s, string pre, string suf)
{
    s.insert(0, pre);
    s.insert(s.size(), suf);
    return;
}
// "---------------------------------------------------------------------------------------"
void repiter(string &s, string oldVal, string newVal)
{
    int oldsize = oldVal.size();
    auto iter_s = s.begin();
    while (iter_s != s.end())
    {
        if (s.substr(iter_s - s.begin(), oldsize) == oldVal)
        {
            iter_s = s.erase(iter_s, iter_s + oldsize);
            iter_s = s.insert(iter_s, newVal.begin(), newVal.end());
            iter_s += newVal.size();
        }
        iter_s++;
    }
    cout << s << endl;
    return;
}
// "---------------------------------------------------------------------------------------"
void reps(string &s, string oldVal, string newVal)
{
    int oldsize = oldVal.size();
    string::size_type pos = 0;
    while (pos < s.size())
    {
        if (s[pos] == oldVal[0])
        {
            if (s.substr(pos, oldsize) == oldVal)
            {
                // s.erase(pos, oldsize);
                // s.insert(pos, newVal);
                s.replace(pos, oldsize, newVal);
                pos += newVal.size();
                continue;
            }
        }
        pos++;
    }
    cout << s << endl;
    return;
}
// "---------------------------------------------------------------------------------------"
void rep(string &s, string oldVal, string newVal)
{
    int oldsize = oldVal.size();
    string::size_type pos = 0;
    while (pos < s.size())
    {
        if (s[pos] == oldVal[0])
        {
            if (s.substr(pos, oldsize) == oldVal)
            {
                s.erase(pos, oldsize);
                s.insert(pos, newVal);
                pos += newVal.size();
                continue;
            }
        }
        pos++;
    }
    cout << s << endl;
    return;
}
// "---------------------------------------------------------------------------------------"
void even_odd(vector<int> &vec)
{
    auto iter = vec.begin();
    while (iter != vec.end())
    {
        if (*iter % 2)
        {
            iter = vec.insert(iter, *iter++);
            iter += 2;
        }
        else
        {
            iter = vec.erase(iter);
        }
    }
    return;
}
// "---------------------------------------------------------------------------------------"
void even_odd(list<int> &vec)
{
    auto iter = vec.begin();
    while (iter != vec.end())
    {
        if (*iter % 2)
        {
            iter = vec.insert(iter, *iter);
            iter++;
            iter++;
        }
        else
        {
            iter = vec.erase(iter);
        }
    }
    return;
}
// "---------------------------------------------------------------------------------------"
void even_odd(forward_list<int> &vec)
{
    auto prev = vec.before_begin();
    auto iter = vec.begin();
    while (iter != vec.end())
    {
        if (*iter % 2)
        {
            prev = vec.insert_after(iter, *iter);
            iter++;
            iter++;
        }
        else
        {
            iter = vec.erase_after(prev);
        }
    }
    return;
}
// "---------------------------------------------------------------------------------------"
void funl(forward_list<string> &flst, string str1, string str2)
{
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while (curr != flst.end())
    {
        if (*curr == str1)
        {
            flst.insert_after(curr, str2);
            break;
        }
        prev = curr;
        curr++;
    }
    if (curr == flst.end())
    {
        flst.insert_after(prev, str2);
    }
    return;
}