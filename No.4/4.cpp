/**
 * Problem description:
 *    A palindromic number¡]¦^¤å¼Æ¡^ reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 ¡Ñ 99.
 *  Find the largest palindrome made from the product of two 3-digit numbers.
 *
 */


/**
 * Solution:
 *
 */

#include <stdio.h>
#include <math.h>

bool judgePalindromic(double num)
{
	double result = 0;
	double temp = num;

	while ((int) (temp / 10) != 0)
	{
	  result = (int) (result * 10) + (int) fmod(temp, 10);
	  temp = temp / 10;
	}

	result = (int) (result * 10) + (int) fmod(temp, 10);


	if (result == num) return true;
	
	

   
	return false;
}


int main()
{
	double n = 0;
	double i,j;
	double max = 0;
	for (i = 999; i >= 100; i--)
	{
		for(j = 999; j >= 100; j--)
		{
			n = i*j;
			if(judgePalindromic(n)) 
			{
				if(max <= n) 
				{
					max = n;
				}
			} 
			
		}
	}
	
	printf("%.0f", max);
	return -1;
}
