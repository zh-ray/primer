#include <algorithm>
#include <cctype>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;
// "---------------------------------------------------------------------------------------"
void word_transform(ifstream &, ifstream &);
// "---------------------------------------------------------------------------------------"
map<string, string> tran_rules(ifstream &);
// "---------------------------------------------------------------------------------------"
const string &transform(const string &, const map<string, string> &);
// "---------------------------------------------------------------------------------------"
int main(int argc, char *argv[])
{
    cout << "----------------------------------------------" << endl;
    string input1("./primer/prog11_input1.txt");
    string input2("./primer/prog11_input2.txt");
    ifstream rule(input1);
    ifstream input(input2);
    if (rule && input)
    {
        word_transform(rule, input);
        rule.close();
        input.close();
    }
    else
    {
        throw runtime_error("input files open failed!");
    }
    cout << "----------------------------------------------" << endl;
    return 0;
}
// "---------------------------------------------------------------------------------------"
const string &transform(const string &s, const map<string, string> &m)
{
    auto iter = m.find(s);
    if (iter != m.end())
    {
        return iter->second;
    }
    return s;
}
// "---------------------------------------------------------------------------------------"
void word_transform(ifstream &rule, ifstream &input)
{
    auto rules = tran_rules(rule);
    string text;
    string output1("./primer/prog11_output.txt");
    ofstream out(output1);
    if (out)
    {
        while (getline(input, text))
        {
            istringstream words(text);
            string word;
            bool flag = true;
            while (words >> word)
            {
                if (flag)
                {
                    flag = false;
                }
                else
                {
                    out << " ";
                }
                out << transform(word, rules);
            }
            out << endl;
        }
        out.close();
    }
    else
    {
        throw runtime_error("output file open failed!");
    }
}
// "---------------------------------------------------------------------------------------"
map<string, string> tran_rules(ifstream &rule)
{
    map<string, string> rules;
    string key, value;
    while (rule >> key && getline(rule, value))
    {
        if (value.size() > 1)
        {
            rules[key] = value.substr(1);
        }
        else
        {
            throw runtime_error("no rule of the key!");
        }
    }
    return rules;
}
// "---------------------------------------------------------------------------------------"