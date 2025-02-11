#include <iostream>
#include <string>
#include <vector>
#include "ExpressionCalculator.h"
#include "PrimesCalculator.h"
using namespace std;

int main()
{
	cout << "======================\n"
		<< " Command-Line Calculator\n"
		<< "======================\n\n";
	char* expression = new char[1000];
	string equation;
	int start, end;
	int choice;
	do
	{
		cout << "Type 1 to calculate an expression.\n"
			<< "2 for finding prime numbers.\n"
			<< "3 for solving equations (first or second order).\n"
			<< "4 for solving system equations. \n"
			<< "0 to exit.\n";
		cin >> choice;
		switch (choice)
		{

		case 1: {
			cout << "Enter an expression" << endl;
			cin.ignore();
			cin.getline(expression, 1000, '\n');
			ExpressionCalculator eCalculator(expression);
			int result = eCalculator.expression();
			cout << "Your result is: " << result << endl;
			break;
		}
		case 2:
		{
			cout << "Enter a range of numbers." << endl;
			cin >> start >> end;
			vector<int> primes = PrimesCalculator::findPrimes(start, end);
			cout << "Prime numbers in the range [" << start << ", " << end << "]: ";
			for (int prime : primes) {
				cout << prime << " ";
			}
			cout << endl;
			break;
		}
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

//#include <iostream>
//#include <Eigen/Dense>
//#include <sstream>
//#include <string>
//#include <vector>
//
//std::vector<double> solveLinearSystem(const std::vector<std::string>& equations) {
//	int n = equations.size();
//	Eigen::MatrixXd A(n, n);
//	Eigen::VectorXd b(n);
//
//	for (int i = 0; i < n; ++i) {
//		std::istringstream iss(equations[i]);
//		double coeff;
//		char var, equal;
//		for (int j = 0; j < n; ++j) {
//			iss >> coeff >> var;
//			A(i, j) = coeff;
//		}
//		iss >> equal;
//		iss >> b(i);
//	}
//
//	// Solve the system of equations
//	Eigen::VectorXd solution = A.colPivHouseholderQr().solve(b);
//	return std::vector<double>(solution.data(), solution.data() + solution.size());
//}
//
//int main() {
//	std::vector<std::string> equations;
//	std::string input;
//	int numEquations;
//
//	std::cout << "Enter the number of equations: ";
//	std::cin >> numEquations;
//	std::cin.ignore(); // To ignore the newline character after the number input
//
//	for (int i = 0; i < numEquations; ++i) {
//		std::cout << "Enter equation " << (i + 1) << " (e.g., '2x + 3y + 4z = 5'): ";
//		std::getline(std::cin, input);
//		equations.push_back(input);
//	}
//
//	try {
//		std::vector<double> solution = solveLinearSystem(equations);
//		std::cout << "Solution: ";
//		for (size_t i = 0; i < solution.size(); ++i) {
//			std::cout << "x" << i + 1 << " = " << solution[i] << (i < solution.size() - 1 ? ", " : "");
//		}
//		std::cout << std::endl;
//	}
//	catch (const std::exception& e) {
//		std::cout << "Error: " << e.what() << std::endl;
//	}
//
//	return 0;
//}