// Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Calculator.h"
#include <cmath>


Calculator::Calculator()
{
}


Calculator::~Calculator()
{
}

int Calculator::add(int a, int b)
{
	return a+b;
}

int Calculator::subtract(int a, int b)
{
	return a-b;
}

int Calculator::multiply(int a, int b)
{
	return a*b;
}

int Calculator::divide(int a, int b)
{
	int returnVal = 0;
	if (b != 0) {
		returnVal = a / b;
	}
	else {
		returnVal = NAN;
	}
	return returnVal;
}
