#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	/*string s("some string");*/

	/*if (s.begin() != s.end())
	{
		auto it = s.begin();
		*it = toupper(*it);
	}*/

	/*for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
		*it = toupper(*it);*/

	/*cout << s << endl;*/

	/*vector<string> text{"some", "", "string"};
	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
		{
			for (auto it2 = it->begin(); it2 != it->end(); ++it2)
				*it2 = toupper(*it2);
			cout << *it << endl;
		}*/

	/*vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10,42);
	vector<int> v4{10};
	vector<int> v5{10,42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};

	cout << v1.size() << endl;
	for (auto i = v1.cbegin(); i != v1.cend(); ++i)
		cout << *i << " ";
	cout << endl;

	cout << v2.size() << endl;
	for (auto i = v2.cbegin(); i != v2.cend(); ++i)
		cout << *i << " ";
	cout << endl;

	cout << v3.size() << endl;
	for (auto i = v3.cbegin(); i != v3.cend(); ++i)
		cout << *i << " ";
	cout << endl;

	cout << v4.size() << endl;
	for (auto i = v4.cbegin(); i != v4.cend(); ++i)
		cout << *i << " ";
	cout << endl;

	cout << v5.size() << endl;
	for (auto i = v5.cbegin(); i != v5.cend(); ++i)
		cout << *i << " ";
	cout << endl;	

	cout << v6.size() << endl;
	for (auto i = v6.cbegin(); i != v6.cend(); ++i)
		cout << *i << " ";
	cout << endl;

	cout << v7.size() << endl;
	for (auto i = v7.cbegin(); i != v7.cend(); ++i)
		cout << *i << " ";
	cout << endl;*/

	/*vector<int> v(10, 2);
	for (auto it = v.begin(); it != v.end(); ++it)
		*it *= 2;
	for (auto i : v)
		cout << i << " ";
	cout << endl;
	auto iter1 = v.begin();
	auto iter2 = v.end();
	cout << iter1 - iter2 << endl;*/

	/* vector<int> text{1,2,3,4,5,6,7,8,9};
	int sought =0;
	auto beg = text.begin(), end = text.end();
	
	auto mid = text.begin() + (end - beg)/2;
	while (mid != end && *mid != sought)
	{
        if (sought < *mid)
        {
            end = mid;
        }
        else
        {
            beg = mid + 1;
        }		
        mid = beg + (end - beg)/2;
	}
	if (mid == end)
	{
	    cout << "no catch!" << endl;
	}
	else
	{
	    cout << "catch!" <<endl;
	} */

    vector<int> ivec;
    int n;
    while (cin >> n)
    {
        ivec.push_back(n);
    }
    for (auto iv = ivec.begin(); iv + 1 != ivec.end() && !isspace(*iv); ++iv)
    {
        cout << *iv + *(iv + 1) << " ";
    }
    cout << endl;
    
    return 0;
}