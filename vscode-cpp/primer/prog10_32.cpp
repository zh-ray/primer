#include <algorithm>
#include <fstream>
#include <functional>
#include <iostream>
#include <iterator>
#include <list>
#include <numeric>
#include <vector>
using namespace std;
// "---------------------------------------------------------------------------------------"
class Sales_item
{
public:
    Sales_item() = default;
    Sales_item(const string &s) : bookNo(s) {}
    Sales_item(const string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p * n) {}
    string isbn() const { return this->bookNo; }
    Sales_item &operator+=(const Sales_item &);

private:
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
// "---------------------------------------------------------------------------------------"
int main(int argc, char *argv[])
{
    cout << "----------------------------------------------" << endl;
    istream_iterator<Sales_item> item_iter(cin), eof;
    // ostream_iterator<Sales_item> out_iter(cout, "\n");
    vector<Sales_item> ivec;
    Sales_item sum = *item_iter++;
    while (item_iter != eof)
    {
        if (item_iter->isbn() == sum.isbn())
        {
            sum += *item_iter++;
        }
        else
        {
            ivec.push_back(sum);
            sum = *item_iter++;
        }
    }
    ivec.push_back(sum);
    for (auto s : ivec)
    {
        cout << s.isbn() << " | ";
    }
    cout << endl;
    cout << "----------------------------------------------" << endl;
    return 0;
}
// "---------------------------------------------------------------------------------------"
Sales_item &Sales_item::operator+=(const Sales_item &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}
// "---------------------------------------------------------------------------------------"