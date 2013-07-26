/**
 * Problem description:
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
 *
 */



/**
 *Solution: We know arithmetic progression(等差級數),use the arithmetic formula to calculate the sum of multiples of certain number. 
 *          Use Inclusion-exclusion principle(容斥原理) to solve this problem, the sum of multiples of 3
 *          and the sum of multiples of 5 added, and then this result subtract the sum of multiples of 15.
 *
 */

/** 
 * Use Python:
 *	def sum1toN(n):
 *		return n * (n + 1) / 2
 *
 *	def sumMultiples(limit, a):
 *		return sum1toN((limit - 1) / a) * a
 *
 *	sumMultiples(1000, 3) + sumMultiples(1000, 5) - sumMultiples(1000, 15)
  */


#include<iostream>

#define MAX 999

int calculator(int n, int range) 
{
	int max = range / n;
	max *= n;
	int sum = 0;
	sum = (n + max) * (max / n) / 2;
	return sum;
	
}


int main() 
{
	int sum = 0;
	
	sum += calculator(3, MAX);
	sum += calculator(5, MAX);
	sum -= calculator(15, MAX);
	
	printf("%d \n", sum);

	return 0;
}
