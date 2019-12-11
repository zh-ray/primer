#include <cctype>
#include <cstring>
#include <fstream>
#include <iostream>
#include <map>
#include <memory>
#include <set>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
// "---------------------------------------------------------------------------------------"
class QueryResult;
class TextQuery
{
public:
    using line_no = vector<string>::size_type;
    TextQuery(ifstream &);
    QueryResult query(const string &) const;

private:
    shared_ptr<vector<string>> sentence;
    map<string, shared_ptr<set<line_no>>> words;
};
TextQuery::TextQuery(ifstream &infile) : sentence(new vector<string>)
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
                lineno.reset(new set<line_no>);
            }
            lineno->insert(no);
        }
    }
}
class QueryResult
{
    friend ostream &print(ostream &, const QueryResult &);

public:
    QueryResult(string t, shared_ptr<set<vector<string>::size_type>> n, shared_ptr<vector<string>> s) : target(t), lineno(n), sentence(s) {}

private:
    string target;
    shared_ptr<set<vector<string>::size_type>> lineno;
    shared_ptr<vector<string>> sentence;
};
QueryResult TextQuery::query(const string &instr) const
{
    shared_ptr<set<vector<string>::size_type>> initset(new set<vector<string>::size_type>);
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
int main(int argc, char *argv[])
{
    cout << "----------------------------------------------" << endl;
    ifstream infile("./primer/prog12_30.txt");
    if (infile)
    {
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

    os << Qptr.target << " occurs " << Qptr.lineno->size() << " time(s)";
    os << endl;
    for (auto i : *(Qptr.lineno))
    {
        os << '\t';
        os << "(line " << i << ") " << Qptr.sentence->at(i - 1) << endl;
    }
    return os;
}
// "---------------------------------------------------------------------------------------"