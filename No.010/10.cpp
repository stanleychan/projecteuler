/**
 * Problem description:
 *  The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 *  Find the sum of all the primes below two million.
 */


/**
 * Solution:
 *
 */


#include <stdio.h>
#include <math.h>

double sum(double);
bool findPrime(double);


int main()
{
	printf("%.0f\n", sum(2000000));
	return 0;
}



double sum(double limit)
{
	double sum = 2;
	
	for (double i = 3; i <= limit; i += 2)
	{
		if(findPrime(i)) 
		{
			sum += i;
		}
	}
	
	return sum;
}


bool findPrime(double num)
{
	if (fmod(num,2) == 0) return false;
	double bound = sqrt(num);

	for (double i = 3; i <= bound; i += 2)
	{
		if (fmod(num,i) == 0) return false;
	}

	return true;
}