#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

struct PersonInfo
{
    string name;
    vector<string> phones;
};

bool valid(string);
string format(string);

int main(int argc, char *argv[])
{
    string line, number;
    vector<PersonInfo> people;
    ifstream in;
    in.open(argv[1]);
    if (in)
    {
        while (getline(in, line))
        {
            PersonInfo info;
            istringstream record(line);
            record >> info.name;
            while (record >> number)
            {
                info.phones.push_back(number);
            }
            people.push_back(info);
        }
        in.close();
    }
    else
    {
        throw runtime_error("File open failed!!!");
    }
    for (const auto &entry : people)
    {
        ostringstream formatted, badnums;
        for (const auto &nums : entry.phones)
        {
            if (!valid(nums))
            {
                badnums << " | " << nums;
            }
            else
            {
                formatted << " | " << format(nums);
            }
        }
        if (badnums.str().empty())
        {
            cout << entry.name << " | " << formatted.str() << endl;
        }
        else
        {
            cerr << "input error: " << entry.name << " invalid number(s) " << badnums.str() << endl;
        }
    }
    return 0;
}

bool valid(string str)
{
    if (str.size() != 11)
    {
        return false;
    }
    else if (str[0] != '1')
    {
        return false;
    }
    return true;
}

string format(string str)
{
    return "+86 " + str;
}