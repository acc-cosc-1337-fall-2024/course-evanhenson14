﻿//write include statements
#include<iostream>
#include "data_types.h"  //tels c++ where to find multiply_numbers function

//write namespace using statement for cout
using std::cout; using std::cin;

int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;

	int result = multiply_numbers(num);

	cout<<"result: "<<result<<"\n";

	int num1 = 4;

	result = multiply_numbers(num1);

	cout<<"result: "<<result<<"\n";

	return 0;
}
