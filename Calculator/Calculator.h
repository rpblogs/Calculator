// Defines the base class for Calculator features
#pragma once
#define NAN (0xffffffff)

class Calculator
{
public:
	Calculator();
	virtual ~Calculator();
	//returns a + b
	int add(int a, int b);
	//returns a-b
	int subtract(int a, int b);
	//returns 
	int multiply(int a, int b);
	//returns a/b or NAN
	int divide(int a, int b);
};

