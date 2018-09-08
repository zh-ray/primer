#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	/*string s1, s2;
	cin >> s1 >> s2;
	cout << s1 << s2 << endl;*/

	/*string word;
	while (cin >> word
	
		cout << word <<endl;*/

	/*string line;
	while (getline (cin, line))
		cout << line << endl;*/

	/*string str = "Z";
	string phase = "a";
	if (str < phase)
	{
		cout << str << " < " << phase << endl;
	}*/

	/*string str1, str2;
	cin >> str1 >> str2;
	if (str1.size() == str2.size())
		cout << "长度相等" << endl;
	else if (str1.size() > str2.size())
		cout << str1 << endl;
	else
		cout << str2 << endl;*/

	/*string str, a_str;
	while (cin >> str)
		a_str = a_str + str + " ";
	cout << a_str <<endl;*/

	/*string s("Hello, World !!!");
	// decltype(s.size()) punct_cnt = 0;
	for (auto &c : s)
		// if (ispunct(c))
		// 	++punct_cnt;
		c = toupper(c);
	cout << s << endl;*/

	/*string s("some something");
	for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index)
		s[index] = toupper(s[index]);
	cout << s << endl;*/

	/*const string hexdigits = "0123456789ABCDEF";
	cout << "Enter a series of numbers between 1 and 15" 
			<< " separated by spaces. Hit ENTER when finished: "
			<< endl;
	string result;
	string::size_type n;
	while (cin >> n)
		if (n < hexdigits.size())
			result += hexdigits[n];
	cout << "Your hex numbers is: " << result << endl;*/

	/*string str1("This is a string!!!");
	cout << str1 << endl;
*/
	/*for (char &c : str1)
		c = 'X';*/

	/*string::size_type n = 0;
	while (n < str1.size())
	{
		str1[n] = 'X';
		++n;
	}*/

	/*for (string::size_type n = 0; n < str1.size(); ++n)
		str1[n] = 'X';
	cout << str1 << endl;
*/
	
	/*string s;
	cout << s[0] << endl;*/

	 string str1;
	 while(getline(cin, str1))
	 {
	 	for (auto &c : str1)
	 		if (!ispunct(c))
	 			cout << c;
	 	cout << endl;
	 }


	return 0;
}