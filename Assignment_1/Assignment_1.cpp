// Assignment_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <climits>
#include <iostream>

void swap(double * val1, double * val2)
{

}

void swap(double & val1, double & val2)
{

}

int main()
{
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

	return 0;
}

