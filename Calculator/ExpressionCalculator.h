#pragma once
#include <string>

class ExpressionCalculator
{
public:
    ExpressionCalculator(char*);
	ExpressionCalculator();
	~ExpressionCalculator();

    int expression();
    

private:
    const char* expressiontoparse;

    char peek();

    char get();
    
    int number();

    int factor();

    int term();

};

