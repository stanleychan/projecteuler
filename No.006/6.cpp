/**
 * Problem description:                                                 
 * The sum of the squares of the first ten natural numbers is,
 *  1^(2) + 2^(2) + ... + 10^(2) = 385
 * The square of the sum of the first ten natural numbers is,
 * (1 + 2 + ... + 10)^(2) = 55^(2) = 3025
 * Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 ?? 385 = 2640.	
 * Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 */


/**
 * Solution(stupid solution):
 * From the equation: (x+y+z)^2 = x^2+y^2+z^2+2(xy+xz+yz), we can deduce the 
 * principle is that (x+y+z+...)^2 = x^2+y^2+z^2+...+2(xy+yz+xz+....)
 */

#include <stdio.h>

double dfferentce(int n) 
{
	/*double sum = 0;
	for (int i=1;i <= n; i++)
	{
		for (int j = i+1; j <= n; j++)
		{
			sum += i*j;
		}
	}
	return sum*2;*/
	double sum = n*(n+1)/2;
	sum *= sum;
	double sum_seq = n*(n+1)*(2*n+1)/6;
	return (sum - sum_seq);
}

int main()
{
	printf("%.0f",dfferentce(100));
	return 0;
}