#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "======================\n"
		<< " Command-Line Calculator\n"
		<< "======================\n\n";
	string expression;
	string equation;
	int start, end;
	int choice;
	do
	{
		cout << "Type 1 to calculate an expression.\n"
			<< "2 for finding prime numbers.\n"
			<< "3 for solving equations (first or second order).\n"
			<< "0 to exit.\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter an expression" << endl;
			getline(cin, expression);
			// 
			break;
		case 2:
			cout << "Enter a range of numbers." << endl;
			cin >> start >> end;
			// 
			break;
		case 3:
			cout << "Enter an equation." << endl;
			getline(cin, equation);
			// 
			break;
		case 0:
			break;
		default:
			break;
		}
	} while (choice);
}