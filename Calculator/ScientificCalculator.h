// Defines Class ScientificCalculator which extends class Calculator
#pragma once
#include "Calculator.h"
#include "math.h"

#define PI (22.0/7.0)

class ScientificCalculator :
	public Calculator
{
public:
	ScientificCalculator();
	virtual ~ScientificCalculator();

	int sin(double t);
	int cos(double t);
	int tan(double t);
	int log(double t);
};

