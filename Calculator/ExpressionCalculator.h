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

  /*  int _tmain(int argc, _tchar* argv[])
    {

        int result = expression();

        return 0;
    }*/

};

