#pragma once
#include<vector>
using namespace std;
class PrimesCalculator
{
public:

	static vector<int> findPrimes(int, int);
private:

	static bool isPrime(int);
};

