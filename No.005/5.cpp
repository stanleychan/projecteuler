/**
 * Problem description:
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 *
 */


/**
 * Solution: I think a smallest common multipe between a and b can solved according this method:
 *           1. a multiple b to get a result,this can divide by both a and b with no doubt;
 *           2. calulater the biggest common divisor, this can use the "Euclid algorithm"（歐几里得算法 即 輾轉相除法）
 *           3. use the common divisor divide result
 */

#include <stdio.h>
#include <math.h>

double getCommonDivisor (double i , double j)
{
	if (fmod(i, j) == 0)
	{
		
		return j;
	} 
	return getCommonDivisor(j, fmod(i, j));
}


double getSmallestCommonMultipe (int n)
{
	int i;
	double j;
	double result = 2;
	for (i = 3; i <= n; i++)
	{
		j = result;		
		result = (j * i) / getCommonDivisor(i,j);
	}

	return result;
}


int main() 
{
	printf("%.0f", getSmallestCommonMultipe(20));
	
	return 0;
}