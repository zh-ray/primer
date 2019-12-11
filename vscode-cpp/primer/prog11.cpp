#include <algorithm>
#include <cctype>
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;
using pf = bool (*)(const int &, const int &);
// "---------------------------------------------------------------------------------------"
bool is_punct(const char &);
// "---------------------------------------------------------------------------------------"
bool new_set(const int &, const int &);
// "---------------------------------------------------------------------------------------"
int main(int argc, char *argv[])
{
    cout << "----------------------------------------------" << endl;
    string str;
    int num;
    vector<pair<string, int>> str_num;
    cin.clear();
    while (cin >> str >> num)
    {
        // first
        /* pair<string, int> temp{str, num};
        str_num.push_back(temp); */
        // second
        /* str_num.push_back(make_pair(str, num)); */
        // third
        /* str_num.push_back({str, num}); */
        // forth
        str_num.emplace_back(str, num);
    }
    for_each(str_num.begin(), str_num.end(), [](const auto &i) { cout << i.first << " - " << i.second << " | "; });
    cout << endl;
    cout << "----------------------------------------------" << endl;
    map<list<int>::iterator, int> i_map;
    cout << "----------------------------------------------" << endl;
    vector<int> ivec{1, 2, 3, 2, 3, 1, 3, 4};
    set<int> iset(ivec.begin(), ivec.end());
    cout << iset.size() << endl;
    set<int, pf> new_iset(new_set);
    // auto set_it = new_iset.begin();
    for (int i : ivec)
    {
        new_iset.insert(i);
    }
    cout << new_iset.size() << endl;
    for_each(new_iset.begin(), new_iset.end(), [](const auto &i) { cout << i << " | "; });
    cout << endl;
    multiset<int> miset(ivec.begin(), ivec.end());
    for_each(miset.begin(), miset.end(), [](const auto &i) { cout << i << " | "; });
    cout << endl;
    cout << "----------------------------------------------" << endl;
    map<string, vector<pair<string, int>>> home;
    string last_name, first_name;
    int brith;
    cin.clear();
    while (cin >> last_name >> first_name >> brith)
    {
        home[last_name].emplace_back(first_name, brith);
    }
    for_each(home.begin(), home.end(), [](const auto &i) { cout << i.first << " - "; for(auto s : i.second) { cout << s.first << " - " << s.second << " | "; } cout << endl; });
    cout << "----------------------------------------------" << endl;
    map<string, size_t> word_count;
    unordered_map<string, size_t> word_count2;
    string word;
    // auto map_it = word_count.cbegin();
    cin.clear();
    while (cin >> word)
    {
        for (auto &ch : word)
        {
            ch = tolower(ch);
        }
        word.erase(find_if(word.begin(), word.end(), is_punct), word.end());
        // ++word_count[word];
        ++word_count2[word];
        auto ret = word_count.insert({word, 1});
        if (!ret.second)
        {
            ++ret.first->second;
        }
    }
    for (const auto &w : word_count)
    {
        cout << w.first << " | " << w.second << endl;
    }
    for (const auto &w : word_count2)
    {
        cout << w.first << " | " << w.second << endl;
    }
    cout << "----------------------------------------------" << endl;
    map<int, string> m{{1, "one"}, {2, "two"}, {4, "four"}};
    cout << typeid(map<int, string>::key_type).name() << endl;
    // cout << typeid(decltype(m[1])).name() << endl;
    auto itmap = m.equal_range(3);
    cout << itmap.first->second << " | " << itmap.second->second << endl;
    cout << "----------------------------------------------" << endl;
    multimap<string, string> master{{"one", "One"}, {"one", "111"}, {"two", "222"}, {"333", "Three"}, {"333", "1+2"}, {"one", "0+0+0+1"}};
    map<string, multiset<string>> order_master;
    for (auto iter = master.begin(); iter != master.end(); iter++)
    {
        order_master[iter->first].insert(iter->second);
    }
    for (auto iter = order_master.begin(); iter != order_master.end(); ++iter)
    {
        size_t times = iter->second.size();
        auto iter2 = iter->second.begin();
        while (times--)
        {
            cout << iter->first << " | " << *iter2 << endl;
            iter2++;
        }
    }
    cout << "----------------------------------------------" << endl;
    string target_author = "one";
    string target_master = "One";
    auto times = master.count(target_author);
    auto iter_m = master.find(target_author);
    while (times)
    {
        if (iter_m->second == target_master)
        {
            master.erase(iter_m);
            break;
        }
        else
        {
            --times;
            ++iter_m;
        }
    }
    for_each(master.cbegin(), master.cend(), [](const auto &m) { cout << m.first << " | " << m.second << endl; });
    cout << "----------------------------------------------" << endl;
    return 0;
}
// "---------------------------------------------------------------------------------------"
bool new_set(const int &a, const int &b)
{
    return a > b;
}
// "---------------------------------------------------------------------------------------"
bool is_punct(const char &ch)
{
    return ispunct(ch);
}
// "---------------------------------------------------------------------------------------"
