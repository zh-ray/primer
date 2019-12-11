#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <vector>
using namespace std;
// "--------------------------------------------------------------------------------------------------------"
struct Sales_data
{
    friend Sales_data add(const Sales_data &, const Sales_data &);
    friend ofstream &print(ofstream &, const Sales_data &);
    friend ifstream &read(ifstream &, Sales_data &);

public:
    Sales_data() = default;
    explicit Sales_data(const string &s) : bookNo(s) {}
    Sales_data(const string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p * n) {}
    explicit Sales_data(ifstream &);

    string isbn() const
    {
        return this->bookNo;
    }
    Sales_data &combine(const Sales_data &);

private:
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data &, const Sales_data &);
ostream &print(ostream &, const Sales_data &);
ifstream &read(ifstream &, Sales_data &);

// "--------------------------------------------------------------------------------------------------------"
istream &func(istream &);
// "--------------------------------------------------------------------------------------------------------"
istream &funs(istream &);
// "--------------------------------------------------------------------------------------------------------"
void readFile(ifstream &, vector<string> &);
// "--------------------------------------------------------------------------------------------------------"
void readFileLine(ifstream &, vector<string> &);
// "--------------------------------------------------------------------------------------------------------"

struct PersonInfo
{
    string name;
    vector<string> phones;
};

// "--------------------------------------------------------------------------------------------------------"

int main(int argc, char *argv[])
{
    cout << "----------------------------------------------" << endl;
    if (func(cin).good())
    {
        cout << "Complete!" << endl;
    }
    cout << "----------------------------------------------" << endl;
    funs(cin);
    cout << "----------------------------------------------" << endl;
    cout << "hi!" << endl;
    cout << "hi!" << flush;
    cout << "hi!" << ends;
    cout << unitbuf;
    cout << nounitbuf;
    cout << "----------------------------------------------" << endl;
    vector<string> vecStr;
    // ifstream in("./primer/prog8.txt");
    ifstream in;
    in.open("./primer/prog8.txt");
    if (in)
    {
        readFile(in, vecStr);
        for (string s : vecStr)
        {
            cout << s << endl;
        }
        in.close();
    }
    else
    {
        throw runtime_error("file open failed!");
    }
    cout << "----------------------------------------------" << endl;
    vecStr.clear();
    in.open("./primer/prog8.txt");
    if (in)
    {
        readFileLine(in, vecStr);
        for (string s : vecStr)
        {
            istringstream record(s);
            string temp;
            while (record >> temp)
            {
                cout << temp << " | ";
            }
            cout << endl;
        }
        in.close();
    }
    else
    {
        throw runtime_error("file open failed!");
    }
    cout << "----------------------------------------------" << endl;
    ifstream input(argv[1]);
    ofstream output(argv[2], ofstream::app);
    if (input && output)
    {
        Sales_data total;
        if (read(input, total))
        {
            Sales_data trans;
            while (read(input, trans))
            {
                if (trans.isbn() == total.isbn())
                {
                    total.combine(trans);
                }
                else
                {
                    print(output, total) << endl;
                    total = trans;
                }
            }
            print(output, total) << endl;
        }
        else
        {
            cerr << "No data?!" << endl;
        }
        input.close();
        output.close();
    }
    else
    {
        throw runtime_error("file open failed!");
    }
    cout << "----------------------------------------------" << endl;
    string line, word;
    vector<PersonInfo> people;
    while (getline(cin, line))
    {
        PersonInfo info;
        istringstream record(line);
        record >> info.name;
        while (record >> word)
        {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }
    for (auto p : people)
    {
        cout << p.name << ends;
    }
    cout << endl;
    cout << "----------------------------------------------" << endl;
    return 0;
}

// "--------------------------------------------------------------------------------------------------------"

istream &func(istream &is)
{
    int test;
    while (is >> test || !is.eof())
    {
        if (is.bad())
        {
            throw runtime_error("The error is unrecoverable");
        }
        if (is.fail())
        {
            cout << "The type of input is wrong" << endl;
            is.clear();
            is.ignore(2, '\n');
            continue;
        }
        cout << test << endl;
    }
    is.clear();
    return is;
}

// "--------------------------------------------------------------------------------------------------------"

istream &funs(istream &is)
{
    string line, test;
    while (getline(is, line))
    {
        istringstream record(line);
        while (record >> test)
        {
            cout << test << " | ";
        }
        cout << endl;
    }
    return is;
}

// "--------------------------------------------------------------------------------------------------------"

void readFile(ifstream &ifs, vector<string> &vecStr)
{
    string temp;
    while (ifs >> temp)
    {
        vecStr.push_back(temp);
    }
}

// "--------------------------------------------------------------------------------------------------------"
void readFileLine(ifstream &ifs, vector<string> &vecStr)
{
    string temp;
    while (getline(ifs, temp))
    {
        vecStr.push_back(temp);
    }
}
// "--------------------------------------------------------------------------------------------------------"

Sales_data::Sales_data(ifstream &ifs)
{
    read(ifs, *this);
}

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

ifstream &read(ifstream &ifs, Sales_data &item)
{
    double price = 0.0;
    ifs >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return ifs;
}

ofstream &print(ofstream &ofs, const Sales_data &item)
{
    ofs << item.isbn() << " " << item.units_sold << " "
        << item.revenue;
    return ofs;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

// "--------------------------------------------------------------------------------------------------------"