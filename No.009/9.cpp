/**
 *	Problem description:
 *	A Pythagorean triplet is a set of three natural numbers, a  < b  < c, for which,
 *	a^(2) + b^(2) = c^(2)
 *
 *	For example, 3^(2) + 4^(2) = 9 + 16 = 25 = 5^(2).
 *	There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 *	Find the product abc.
 */



/**
 * Solution:
 */


#include <stdio.h>
#include <math.h>

int cal(int n)
{
	int a,b;
	//float limit = (sqrt((float)2) * sqrt((float)n)/2); 
	//printf("%d\n", limit);
	for (a = 1; a <= n; a++) 
	{
		for (b = a+1; b <= n; b++)
		{
			int c = pow(n - a - b,2);
			if (c == pow(a,2) + pow(b,2)) 
			{
				printf("%d\n",a);
				printf("%d\n",b);
				printf("%d\n",c);
				return (a*b*((int)sqrt((float) c)));
			}
			
		}
	}

	return 0;
}


int main()
{
	printf("%d\n",cal(1000));
	return 0;
}