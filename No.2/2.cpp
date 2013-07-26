/**
 * Problem description:
 * Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
 *	1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 * Find the sum of all the even-valued terms in the sequence which do not exceed four million.
 * note: even-valued:���ƭ�
 */

/**
 * Soluton:  This is a very stupid low-effiency method
 * 
 *
 */


#include <stdio.h>

int Fibonacci(int n)
{
	if (n == 1) 
	{
		return 1;
	} 
	if (n == 2)
	{
		return 2;
	} 
	return Fibonacci(n-1) + Fibonacci(n-2);


}


int main() 
{
	const int SIZE = 4000000;

	int n = 0;

	int sum = 0;
	for (int i = 1; ; i++) 
	{
		n = Fibonacci(i);
		if(n <= SIZE) 
		{
			if(n%2 == 0)
			sum += n;
		}
		else 
		{
			break;
		}



	}

	printf("%d", sum);

	return 0;

}