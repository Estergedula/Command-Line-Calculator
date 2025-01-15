#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout<< "======================\n" << " Command-Line Calculator\n" << "======================\n\n";
	string expression;
	int choice;
	do
	{
		cout << "Type 1 to calculate an expression.\n 2 for finding prime numbers.\n"
			<< "3 for solving equations.\n 0 to exit.\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter an expression" << endl;
			cin.getline(expression);
		default:
			break;
		}
	} while (choice);
}