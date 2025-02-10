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
char ExpressionCalculator::peek() {
	return *expressiontoparse;
}

char ExpressionCalculator::get() {
	return *expressiontoparse++;
}

int ExpressionCalculator::number() {
	int result = get() - '0';
	while (peek() >= '0' && peek() <= '9')
	{
		result = 10 * result + get() - '0';
	}
	return result;
}

int ExpressionCalculator::factor()
{
    if (peek() >= '0' && peek() <= '9')
        return number();
    else if (peek() == '(')
    {
        get(); // '('
        int result = expression();
        get(); // ')'
        return result;
    }
    else if (peek() == '-')
    {
        get();
        return -factor();
    }
    return 0; // error
}

int ExpressionCalculator::term()
{
    int result = factor();
    while (peek() == '*' || peek() == '/')
        if (get() == '*')
            result *= factor();
        else
            result /= factor();
    return result;
}