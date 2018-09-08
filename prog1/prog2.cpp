#include <iostream>
#include "Sales_item.h"
int main()
{
	/* code */
	/*std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The sum of " << v1 << " and " << v2 
				<< " is " << v1 + v2 << std::endl;*/
	/*int i = 0;
	int a = i++;
	int b = ++i;
	std::cout << a << b << std::endl;*/
	/*int a = 0, b = 0, temp;
	std::cout << "Input two integers" << std::endl;
	std::cin >> a >> b;
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	for (int val = b; val <= a; ++val)
	{		
		std::cout << val << " ";
	}
	std::cout << std::endl;*/
	// std::cout << "/*";
	// std::cout << "*/";
	// std::cout << /* "*/" */";
	// std::cout <<  /* "*/" /* "/*" */;

	/*int sum = 0, value = 0;
	while (std::cin >> value)
		sum += value;
	std::cout << "Sum is: " << sum << std::endl;*/
	/*int currVal = 0, val = 0;
	if (std::cin >> currVal) {
		int cnt = 1;
		while (std::cin >> val) {
			if (val == currVal)
				++cnt;
			else {
				std::cout << currVal << " occurs "
					<< cnt << " times " << std::endl;
				currVal = val;
				cnt = 1;
			}
		}
		std::cout << currVal << "occurs" << cnt 
					<< "times" << std::endl;
	}*/
	/*Sales_item currItem, item;
	if (std::cin >> currItem) {
		
		while (std::cin >> item) {
			if (item.isbn() == currItem.isbn())
				currItem += item;
			else {
				std::cout << currItem <<std::endl;
				currItem = item;
			}
		}
		std::cout << currItem << std::endl;
	}*/
	/*Sales_item item1, item2;
	std::cin >> item1 >> item2;
	if (item1.isbn() == item2.isbn())
	{
		std::cout << item1 + item2 << std::endl;
		return 0;
	} else {
		std::cerr << "Data must refer to same ISBN"
					<< std::endl;
		return -1;
	}*/
	Sales_item total;
	if (std::cin >> total)
	{
		Sales_item trans;
		while (std::cin >> trans) {
			if (total.isbn() == trans.isbn())
				total += trans;
			else {
				std::cout << total << std::endl;
				total = trans;
			}
		}
		std::cout << total << std::endl;
	} else {
		std::cerr << "No data?!" <<std::endl;
		return -1;
	}
	return 0;
	
}