#include <iostream>

// int i = 42;

/*int j = 0;
constexpr int i = 42;*/

struct Foo
{
	
}

int main()
{
	// unsigned char c = -1;
	// std::cout << c << std::endl;
	
	// unsigned u = 10, u2 = 42;
	// std::cout << u2 - u << std::endl;
	// std::cout << u - u2 << std::endl;

	// int i = 10, i2 = 42;
	// std::cout << i2 - i << std::endl;
	// std::cout << i - i2 << std::endl;
	// std::cout << i - u << std::endl;
	// std::cout << u - i << std::endl;

	/*std::cout << "\tHi!\n" << std::endl;
	std::cout << "\a" << std::endl;
	std::cout << "\1234" << std::endl;

	std::cout << "2\x4d\n" << std::endl;
	std::cout << "2\t\x4d\n" << std::endl;*/


	/*std::cin >> int input_value;
	double salary = wage = 9999.99;*/

	// int double = 3.14;
	// int _;
	// int catch-22;
	// int 1_or_2  = 1;
	// double Double  =3.14;

	/*int i = 100;
	int j = i;
	std::cout << j << std::endl;*/

	/*int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i)
		sum += i;
	std::cout << i << " " << sum << std::endl;
*/
	/*int i = 0, &r1 = i;
	double d = 0, &r2 = d;
	r2 = 3.14159;
	std::cout << i << " " << r1 << " " 
		<< d << " " << r2 << std::endl;
	r2 = r1;
	std::cout << i << " " << r1 << " " 
		<< d << " " << r2 << std::endl;
	i = r2;
	std::cout << i << " " << r1 << " " 
		<< d << " " << r2 << std::endl;
	r1 = d;
	std::cout << i << " " << r1 << " " 
		<< d << " " << r2 << std::endl;*/

	/*int i, &ri = i;
	i = 5;
	ri = 10;
	std::cout << i << " " << ri << std::endl;*/

	/*int ival = 42, ival2 = 43;
	int *p = &ival;
	int &r = *p;
	// int &r = &ival2;

	std::cout << p << " " << &r << std::endl;

	*p = 0;
	std::cout << *p << " " << p << std::endl;*/

	/*int i = 42;
	int *p1 = &i;
	*p1 = *p1 * *p1;
	std::cout << *p1 << std::endl;*/

	/*int i = 0;
	double *dp = &i;
	int *ip = i;
	int *p = &i;*/

	/*int ival = 1024;
	int *pi = &ival;
	int **ppi = &pi;
	int *&r = pi;
	r = &ival;
	*r = 0;
	std::cout << r << " " << pi << std::endl;*/

	/*const int i = 1;
	const int *const p3 = &i;
	const int *p1 = nullptr;
	p1 = p3;*/


	/*constexpr const int *p = &i;
	constexpr int *p1 = &j;*/

	/*int i = 0, &r = i;
	auto a = r;
	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	auto &g = ci;

	a = 42;
	b = 42;
	c = 42;
	d = 42;
	e = 42;
	g = 42;*/

	/*int i = 42, *p = &i, &r = i;
	decltype ((r) + 0) c;*/

	/*int a = 3, b = 4;
	decltype(a) c = a; // c (int) = 3
	decltype((b)) d = a; //  int &d = a 
	++c; // c = 4
	++d; // a = 4

	std::cout << a << " " << b << " " << c 
		<< " " << d << std::endl;*/

	/*int a = 3, b = 4;
	decltype(a) c = a;
	decltype(a = b) d = a;

	std::cout << a << " " << b << " " << c 
		<< " " << d << std::endl;*/




	return 0;
}