//#include "stdafx.h"
#include "ScientificCalculator.h"
#include <math.h>
#define ROUND_2_INT(f) ((int)(f >= 0.0 ? (f + 0.5) : (f - 0.5)))

ScientificCalculator::ScientificCalculator()
{
}

ScientificCalculator::~ScientificCalculator()
{
}

int ScientificCalculator::sin(double t)
{
	double d = ::sin(t);
	return ROUND_2_INT(d); //round
}

int ScientificCalculator::cos(double t)
{
	double d = ::cos(t);
	return ROUND_2_INT(d); //round
}

int ScientificCalculator::tan(double t)
{
	double d = ::tan(t);
	return ROUND_2_INT(d); //round
}

int ScientificCalculator::log(double t)
{
	double d = ::log(t);
	return ROUND_2_INT(d); //round
}

