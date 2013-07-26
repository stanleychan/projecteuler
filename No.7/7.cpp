/**
 * Problem description:
 *  By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6^(th) prime is 13.
 *   What is the 10001^(st) prime number?
 */


/**
 * Solution: use sieve of Eratosthenes to find prime number, the sieve is big enough when it is equal with sqare root of n
 */

#include <stdio.h>
#include <math.h>

bool judgePrime(double m)
{
	double max = sqrt(m);
	double n = 3;
	if (fmod(m,2) == 0) return false;
	if (m == 3) return true;
	while (fmod(m,n) != 0)
	{
		if (n >= max) return true;
		n += 2;
		
	}
	return false;
}


double findPrimeNum(int n) 
{
	int count = 1;
    for (double i = 3; ;)
	{
		if (judgePrime(i)) 
		{
			count++;
		}
		if (count == n) return i;
		i += 2;
	}
	return 0;
}




int main()
{	
	printf("%.0f\n", findPrimeNum(10001));
	return 0;
}