#include "PrimesCalculator.h"

vector<int> PrimesCalculator::findPrimes(int start, int end)
{
	vector<int> primes;
	for (int num = start; num <= end; num++) {
		if (isPrime(num)) {
			primes.push_back(num);
		}
	}
	return primes;
}

bool PrimesCalculator::isPrime(int num)
{
	if (num <= 1) return false; // 0 and 1 are not prime numbers
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) return false; // Found a divisor, not prime
	}
	return true; // No divisors found, it's prime
}
