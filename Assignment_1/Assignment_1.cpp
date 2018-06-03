// Assignment_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <climits>
#include <iostream>


/*
The method shall test whether the value of the second argument
is less than the value of the first argument. If it is, the
values of the arguments are swapped.
*/
void swap(double * val1, double * val2)
{
	if (*val2 < *val1)
	{
		double  tmp = *val1;
		*val1 = *val2;
		*val2 = tmp;
	}
}

/*
The method shall test whether the value of the second argument
is less than the value of the first argument. If it is, the
values of the arguments are swapped.
*/
void swap(double & val1, double & val2)
{
	if (val2 < val1)
	{
		double tmp = val1;
		val1 = val2;
		val2 = tmp;
	}
}

int main()
{
	std::cout << "Martin Hong OO C++ Assignment 1" << std::endl;

	//using the climit lib, output some class fields and byte sizes of primitives
	std::cout << CHAR_BIT << " :Number of bits in a char" << ", bytes: " << sizeof(char) << std::endl;
	std::cout << CHAR_MAX << ": Maximum char value" << ", bytes: " << sizeof(char) << std::endl;
	std::cout << CHAR_MIN << ": Minimum char value" << ", bytes: " << sizeof(char) << std::endl;
	std::cout << SHRT_MAX << ": Maximum short value" << ", bytes: " << sizeof(short) << std::endl;
	std::cout << SHRT_MIN << ": Minimum short value" << ", bytes: " << sizeof(short) << std::endl;
	std::cout << USHRT_MAX << ": Maximum unsigned short value" << ", bytes: " << sizeof(short) << std::endl;
	std::cout << INT_MAX << ": Maximum int value" << ", bytes: " << sizeof(int) << std::endl;
	std::cout << INT_MIN << ": Minimum int value" << ", bytes: " << sizeof(int) << std::endl;
	std::cout << UINT_MAX << ": Maximum unsigned int value" << ", bytes: " << sizeof(int) << std::endl;
	std::cout << LONG_MAX << ": Maximum long value" << ", bytes: " << sizeof(long) << std::endl;
	std::cout << LONG_MIN << ": Minimum long value" << ", bytes: " << sizeof(long) << std::endl;
	std::cout << ULONG_MAX << ": Maximum unsigned long value" << ", bytes: " << sizeof(long) << std::endl;
	std::cout << LLONG_MAX << ": Maximum long long value" << ", bytes: " << sizeof(long long) << std::endl;
	std::cout << LLONG_MIN << ": Minimum long long value" << ", bytes: " << sizeof(long long) << std::endl;
	std::cout << ULLONG_MAX << ": Maximum unsigned long long value" << ", bytes: " << sizeof(long long) << std::endl;

	//first test the functions actually swap
	std::cout << "testing that ref and pointer swap functions will actually swap" << std::endl;
	double val1 = 10.2;
	double val2 = 3.222;
	swap(val1, val2);
	std::cout << "val1 should be 3.222: " << val1 << ", val2 should be 10.2: " << val2 << std::endl;
	val1 = 10.2;
	val2 = 3.222;
	swap(&val1, &val2);
	std::cout << "val1 should be 3.222: " << val1 << ", val2 should be 10.2: " << val2 << std::endl;

	//test functions do not swap
	std::cout << "testing that ref and pointer swap functions do not swap" << std::endl;
	val1 = 3.222;
	val2 = 10.2;
	swap(val1, val2);
	std::cout << "val1 should be 3.222: " << val1 << ", val2 should be 10.2: " << val2 << std::endl;
	val1 = 3.222;
	val2 = 10.2;
	swap(&val1, &val2);
	std::cout << "val1 should be 3.222: " << val1 << ", val2 should be 10.2: " << val2 << std::endl;




	return 0;
}

