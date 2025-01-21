#include "ExpressionCalculator.h"
#include <iostream>
using namespace std;

ExpressionCalculator::ExpressionCalculator(char* expression)
{
	expressiontoparse = expression;
}

ExpressionCalculator::ExpressionCalculator()
{
}

ExpressionCalculator::~ExpressionCalculator()
{
}

int ExpressionCalculator::expression()
{
	int result = term();
	while (peek() == '+' || peek() == '-')
		if (get() == '+')
			result += term();
		else
			result -= term();
	return result;
}
