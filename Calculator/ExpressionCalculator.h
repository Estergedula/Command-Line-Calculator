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

    char peek()
    {
        return *expressiontoparse;
    }

    char get()
    {
        return *expressiontoparse++;
    }
    int number()
    {
        int result = get() - '0';
        while (peek() >= '0' && peek() <= '9')
        {
            result = 10 * result + get() - '0';
        }
        return result;
    }

    int factor()
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

    int term()
    {
        int result = factor();
        while (peek() == '*' || peek() == '/')
            if (get() == '*')
                result *= factor();
            else
                result /= factor();
        return result;
    }

  /*  int _tmain(int argc, _tchar* argv[])
    {

        int result = expression();

        return 0;
    }*/

};

