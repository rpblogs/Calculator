// Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
#include "Calculator.h"
#include "ScientificCalculator.h"
void TestCalculator();
void TestScientificCalculator();

class TestClass
{
	int a;
	int b;
	int func() { return a+b;}
};

int main()
{
	cout << "Test Calculator Application..." << endl;
	TestCalculator();
	TestScientificCalculator();
	return 0;
}

//=====================================================
void TestCalculator()
{
	Calculator *pCalc;

	cout << "TestCalculator() Enter." << endl;
	
	cout << endl << "adds 1 and 2" << "\t";
	//----------------------------------------
	try
	{
		pCalc = new Calculator();
		if(pCalc->add(1,2) == 3)
			cout << "PASS" << endl;
		else
			cout << "FAIL" << endl;
		delete pCalc;
	}
	catch(...)
	{ cout << "FAIL" << endl; delete pCalc;}

	cout << endl << "subtracts 2 from 9" << "\t";
	//----------------------------------------
	try
	{
		pCalc = new Calculator();
		if(pCalc->subtract(9,2) == 7)
			cout << "PASS" << endl;
		else
			cout << "FAIL" << endl;
		delete pCalc;
	}
	catch(...)
	{ cout << "FAIL" << endl; delete pCalc;}

	cout << endl << "multiply 4 and 3" << "\t";
	//----------------------------------------
	try
	{
		pCalc = new Calculator();
		if(pCalc->multiply(4,3) == 12)
			cout << "PASS" << endl;
		else
			cout << "FAIL" << endl;
		delete pCalc;
	}
	catch(...)
	{ cout << "FAIL" << endl; delete pCalc; }
	
	cout << endl << "divide 10 and 2" << "\t";
	//----------------------------------------
	try
	{
		pCalc = new Calculator();
		if(pCalc->divide(10,2) == 5)
			cout << "PASS" << endl;
		else
			cout << "FAIL" << endl;
		delete pCalc;
	}
	catch(...)
	{ cout << "FAIL" << endl; delete pCalc;}

	cout << endl << "divide 5 and 0" << "\t";
	//----------------------------------------
	try
	{
		pCalc = new Calculator();
		if(pCalc->divide(5,0) == NAN)
			cout << "PASS" << endl;
		else
			cout << "FAIL" << endl;
		delete pCalc;
	}
	catch(...)
	{ cout << "FAIL" << endl; delete pCalc;}
}

//=====================================================
void TestScientificCalculator()
{
	ScientificCalculator *pSciCalc;

	cout << endl << "TestScientificCalculator() Enter." << endl;
	
	cout << endl << "Extends Calculator" << "\t";
	//----------------------------------------
	try
	{
		pSciCalc = new ScientificCalculator();
		if (Calculator * p = dynamic_cast<Calculator *>(pSciCalc))
			cout << "PASS" << endl; // The type of obj is or is derived from C
		else
			cout << "FAIL" << endl;
		delete pSciCalc;
	}
	catch(...)
	{ cout << "FAIL" << endl; delete pSciCalc;}

	cout << endl << "returns sine of PI/2" << "\t";
	//----------------------------------------
	try
	{
		pSciCalc = new ScientificCalculator();
		if(pSciCalc->sin(PI/2) == 1)
			cout << "PASS" << endl;
		else
			cout << "FAIL" << endl;
		delete pSciCalc;
	}
	catch(...)
	{ cout << "FAIL" << endl; delete pSciCalc;}

	cout << endl << "returns cosine of PI" << "\t";
	//----------------------------------------
	try
	{
		pSciCalc = new ScientificCalculator();
		if(pSciCalc->cos(PI) == -1)
			cout << "PASS" << endl;
		else
			cout << "FAIL" << endl;
		delete pSciCalc;
	}
	catch(...)
	{ cout << "FAIL" << endl; delete pSciCalc;}

	cout << endl << "returns tangent of 0" << "\t";
	//----------------------------------------
	try
	{
		pSciCalc = new ScientificCalculator();
		if(pSciCalc->tan(0) == 0)
			cout << "PASS" << endl;
		else
			cout << "FAIL" << endl;
		delete pSciCalc;
	}
	catch(...)
	{ cout << "FAIL" << endl; delete pSciCalc;}

	cout << endl << "returns logarithm of 1" << "\t";
	//----------------------------------------
	try
	{
		pSciCalc = new ScientificCalculator();
		if(pSciCalc->log(1) == 0)
			cout << "PASS" << endl;
		else
			cout << "FAIL" << endl;
		delete pSciCalc;
	}
	catch(...)
	{ cout << "FAIL" << endl; delete pSciCalc;}
}

