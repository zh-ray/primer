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
	/* int n;
	vector<int> vec;
	while(cin >> n)
		vec.push_back(n); */
	
	/* string str;
	vector<string> vec;
	while(cin >> str)
		vec.push_back(str);
	
	
	for (auto i : vec)
		cout << i << endl; */
	
	/* vector<int> v{1,2,3,4,5,6,7,8,9};
	for (auto &i : v)
		i *= i;
	for (auto i : v)
		cout << i << " ";
	cout << endl; */
	
	/* vector<unsigned> scores(11,0);
	unsigned grade;
	while (cin >> grade)
		if (grade <= 100)
			++scores[grade/10];
	for (auto i : scores)
		cout << i << " ";
	cout << endl; */
	
	/*vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10,42);
	vector<int> v4{10};
	vector<int> v5{10,42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};

	cout << v1.size() << endl;
	for (auto i : v1)
		cout << i << " ";
	cout << endl;

	cout << v2.size() << endl;
	for (auto i : v2)
		cout << i << " ";
	cout << endl;

	cout << v3.size() << endl;
	for (auto i : v3)
		cout << i << " ";
	cout << endl;

	cout << v4.size() << endl;
	for (auto i : v4)
		cout << i << " ";
	cout << endl;

	cout << v5.size() << endl;
	for (auto i : v5)
		cout << i << " ";
	cout << endl;

	cout << v6.size() << endl;
	for (auto i : v6)
		cout << i << " ";
	cout << endl;

	cout << v7.size() << endl;
	for (auto i : v7)
		cout << i << " ";
	cout << endl;*/

	/*vector<string> svec;
	string word;
	while (cin >> word)
		svec.push_back(word);
	for (auto &w : svec)
		for (auto &i : w)
			i = toupper(i);

	for (auto i : svec)
		cout << i << endl;*/

	vector<int> ivec;
	int n;
	while (cin >> n)
		ivec.push_back(n);

	// for (decltype(ivec.size()) i = 0; i < ivec.size() - 1; ++i)
	// 	cout << ivec[i] + ivec[i+1] << " ";

	for (decltype(ivec.size()) i = 0; i < ivec.size(); ++i)
		cout << ivec[i] + ivec[ivec.size() - 1 - i] << " ";
	cout << endl;

	
	
	
	
	
	return 0;
}