#include <iostream>
#include <string>
#include "Sales_data.h" 

/*struct Sales_data
{
	std::string bookNo; //书籍序列号
	unsigned units_sold = 0; //销售量
	double revenue = 0.0; //总收益
	double price = 0.0; //书籍单价
	// double average = 0.0; //平均价格
};*/

int main()
{
	double average = 0.0;
	/*Sales_data data1, data2;
	std::cin >> data1.bookNo >> data1.units_sold 
		>> data1.price;
	std::cin >> data2.bookNo >> data2.units_sold 
		>> data2.price;

	data1.revenue = data1.units_sold * data1.price;
	data2.revenue = data2.units_sold * data2.price;
	average = (data1.revenue + data2.revenue) / 
		(data1.units_sold + data2.units_sold);

	std::cout << data1.bookNo << " " << 
		data1.units_sold + data2.units_sold << " " <<
		data1.revenue + data2.revenue << " " <<
		average << std::endl;*/

	/*Sales_data data, sum_data;
	while (std::cin >> data.bookNo >> data.units_sold >> data.price)
	{
		sum_data.units_sold += data.units_sold;
		sum_data.revenue += (data.units_sold * data.price);
	}
	average = sum_data.revenue / sum_data.units_sold;

	std::cout << data.bookNo << " " << 
		sum_data.units_sold << " " << sum_data.revenue << " " <<
		average << std::endl;*/

	Sales_data data, sum_data;
	int count = 1;
	if (std::cin >> data.bookNo >> data.units_sold >> data.price)
	{
		while (std::cin >> sum_data.bookNo >> sum_data.units_sold >> sum_data.price)
		{
			if (sum_data.bookNo == data.bookNo)
				++count;
			else 
			{
				std::cout << data.bookNo << " " << count << std::endl;
				/*data.bookNo = sum_data.bookNo;
				data.units_sold = sum_data.units_sold;
				data.price = sum_data.price;*/
				data = sum_data;
				count = 1;
			}
		}
		std::cout << data.bookNo << " " << count << std::endl;
	}


	return 0;
}